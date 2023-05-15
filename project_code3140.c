#include <MKL46Z4.h>

//defined pins
const int Szero_pin = 2;//S0
const int Sone_pin = 4;//S1
const int Stwo_pin = 6;//S2
const int Sthree_pin = 7;//S3
const int Sout_pin = 3;//out
const int Buzzer_pin = 8;//buzzer

void PORT_Initialize(void){
	SIM->SCGC5 |= SIM_SCGC5_PORTD_MASK; //enable the clock for port D

	//setting pins to GPIO mode
	PORTD->PCR[Szero_pin] |= PORT_PCR_MUX(001);
	PORTD->PCR[Sone_pin] |= PORT_PCR_MUX(001);
	PORTD->PCR[Stwo_pin] |= PORT_PCR_MUX(001);
	PORTD->PCR[Sthree_pin] |= PORT_PCR_MUX(001);
	PORTD->PCR[Sout_pin] &= ~PORT_PCR_MUX(0b111);
	PORTD->PCR[Sout_pin] |= PORT_PCR_MUX(001);

	//setting pins' in/out
	PTD->PDDR |= GPIO_PDDR_PDD(1 << Szero_pin);//input
	PTD->PDDR |= GPIO_PDDR_PDD(1 << Sone_pin);//input
	PTD->PDDR |= GPIO_PDDR_PDD(1 << Stwo_pin);//input
	PTD->PDDR |= GPIO_PDDR_PDD(1 << Sthree_pin);//input
	PTD->PDDR &= ~GPIO_PDDR_PDD(1 << Sout_pin);//output

	//setup interrupt
	PORTD->PCR[Sout_pin] &= ~PORT_PCR_IRQC(0b1111); // Clear IRQC bits for PTD
	PORTD->PCR[Sout_pin] |= PORT_PCR_IRQC(0b1011); //triggers an interrupt on either rising/falling edge

	//calibrate the sensor
	PTD->PSOR |= GPIO_PSOR_PTSO(1 << Szero_pin);
	PTD->PCOR |= GPIO_PCOR_PTCO(1 << Sone_pin);//set S0 high, S1 low to have 20% frequency scaling (sacrifice some measurement speed for better accuracy)
	PTD->PCOR |= GPIO_PCOR_PTCO(1 << Stwo_pin);
	PTD->PCOR |= GPIO_PCOR_PTCO(1 << Sthree_pin);//set S2 and S3 low to start with red filter

	//buzzer
	SIM->SCGC5 |= SIM_SCGC5_PORTC_MASK;//enable the clock for port C
	PORTC->PCR[Buzzer_pin] |= PORT_PCR_MUX(001);//set it to GPIO mode
	PTC->PDDR |= GPIO_PDDR_PDD(1 << Buzzer_pin);//set it as an output
	PTC->PCOR |= GPIO_PCOR_PTCO(1 << Buzzer_pin);

}


int main(void) {

	PORT_Initialize();//prepare all the ports and pins

	while(1) {
		unsigned int red=0;//initialize and reset during each iteration to prepare for a new round of measurement
		unsigned int green=0;
		unsigned int blue=0;

		PTD->PCOR |= GPIO_PCOR_PTCO(1 << Stwo_pin);
		PTD->PCOR |= GPIO_PCOR_PTCO(1 << Sthree_pin);//turn on the red color filter to detect red
		if((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) != 0){//check interrupt flags
			PORTD->PCR[Sout_pin] |= PORT_PCR_ISF(1);//first clear the interrupt flags
			while((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) == 0){
				red++;//counting for how long we have not encountered any edges; will use this to infer the frequency of the input wave
			}
		}

		PTD->PSOR |= GPIO_PSOR_PTSO(1 << Stwo_pin);
		PTD->PSOR |= GPIO_PSOR_PTSO(1 << Sthree_pin);//turn on the green color filter to detect green
		if((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) != 0){
			PORTD->PCR[Sout_pin] |= PORT_PCR_ISF(1);
			while((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) == 0){
				green++;
			}
		}

		PTD->PCOR |= GPIO_PCOR_PTCO(1 << Stwo_pin);
		PTD->PSOR |= GPIO_PSOR_PTSO(1 << Sthree_pin);//turn on the blue color filter to detect blue
		if((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) != 0){
			PORTD->PCR[Sout_pin] |= PORT_PCR_ISF(1);
			while((PORTD->PCR[Sout_pin] & PORT_PCR_ISF(1)) == 0){
					blue++;
			}
		}

		//now, use the RGB information to make decisions: smaller count -> faster frequency -> more of that color
		if(red<50 && blue>80 && green>80){//detection of red
			for(int i=0;i<2;i++){//loop two rounds for each detection of the color, this is to make the buzzer sound nicer and smoother
			//with a passive buzzer, by turning it on and off at certain rate results in sound of different frequency
			PTC->PSOR |= GPIO_PSOR_PTSO(1 << Buzzer_pin);//turn on buzzer
			int delay3 = 1450;//second highest frequency (music note E)
			while(delay3 > 0){
				delay3--;
			}
			PTC->PCOR |= GPIO_PCOR_PTCO(1 << Buzzer_pin);//turn off buzzer
			int delay4 = 1450;
			while(delay4 > 0){
				delay4--;
			}
			}
		}
		else if(blue<50 && red>80 && green>80){//detection of blue
			for(int i=0;i<2;i++){//loop two rounds for each detection of the color, this is to make the buzzer sound nicer and smoother
			PTC->PSOR |= GPIO_PSOR_PTSO(1 << Buzzer_pin);//turn on buzzer
			int delay3 = 1800;//third highest frequency (music note C)
			while(delay3 > 0){
			delay3--;
			}
			PTC->PCOR |= GPIO_PCOR_PTCO(1 << Buzzer_pin);//turn off buzzer
			int delay4 = 1800;
			while(delay4 > 0){
			delay4--;
			}
		}
		}
		else if(green<50){//detection of green
			for(int i=0;i<2;i++){//loop two rounds for each detection of the color, this is to make the buzzer sound nicer and smoother
			PTC->PSOR |= GPIO_PSOR_PTSO(1 << Buzzer_pin);//turn on buzzer
			int delay3 = 1700;//fourth highest frequency (music note D)
			while(delay3 > 0){
				delay3--;
			}
			PTC->PCOR |= GPIO_PCOR_PTCO(1 << Buzzer_pin);//turn off buzzer
			int delay4 = 1700;
			while(delay4 > 0){
				delay4--;
			}
		}
		}

		else if(blue<70 && red<70 && green>100){//detection of purple (more blue and red but less green)
			for(int i=0;i<2;i++){//loop two rounds for each detection of the color, this is to make the buzzer sound nicer and smoother
			PTC->PSOR |= GPIO_PSOR_PTSO(1 << Buzzer_pin);//turn on buzzer
			int delay3 = 750;//highest frequency (random note)
			while(delay3 > 0){
				delay3--;
			}
			PTC->PCOR |= GPIO_PCOR_PTCO(1 << Buzzer_pin);//turn off buzzer
			int delay4 = 750;
			while(delay4 > 0){
				delay4--;
			}
		}
		}
	}
	return 0;
}
