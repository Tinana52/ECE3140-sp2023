## Your Project Answers

### Project Description

Our final project idea involves a piezoelectric sensor, a personal computer, and our board. We may use bluetooth in the end if the project is not too hard. We plan to place a piezoelectric sensor underneath a floor mat so that when someone steps on it, it changes the tabs on your computer, hiding your recent computer activity.
### Technical Approach

We will use a Ceramic Piezo Vibration Sensor. Some options can be:
https://www.amazon.com/MakerHawk-Analog-Ceramic-Vibration-Arduino/dp/B07KS5NV4V/ref=asc_df_B07KS5NV4V?tag=bngsmtphsnus-20&linkCode=df0&hvadid=80264466527755&hvnetw=s&hvqmt=e&hvbmt=be&hvdev=c&hvlocint=&hvlocphy=&hvtargid=pla-4583863993163556&psc=1

 

https://www.amazon.com/dp/B08254BM7X/ref=sspa_dk_detail_3?psc=1&pd_rd_i=B08254BM7X&pd_rd_w=dHdlW&content-id=amzn1.sym.88097cb9-5064-44ef-891b-abfacbc1c44b&pf_rd_p=88097cb9-5064-44ef-891b-abfacbc1c44b&pf_rd_r=TR9V47YS3XM33AAF3JGF&pd_rd_wg=JJXjG&pd_rd_r=f7c1afd7-fd56-4edf-b0e1-9469410977ae&s=industrial&sp_csd=d2lkZ2V0TmFtZT1zcF9kZXRhaWw&smid=A36ZH2MCHPKXUA

 

Since the output signal of the sensor will be analog, we will also include an analog to digital converter.

https://www.sparkfun.com/products/12918

 

We are not sure about how to tackle bluetooth communication. We believe that the board itself cannot do that so we probably need something else. Recommendations here would be very useful.

 

A high-level block diagram for our system is depicted below. The floor mat will need to be an elastic or bouncy material so that when someone steps on it, it will vibrate or flex enough for the piezoelectric sensor to detect it. The piezoelectric sensor will then convert the physical vibration to a voltage, and then output an analog signal to the ADC converter. The digital signal generated from the ADC will be inputted into our FRDM-KL46Z board. A power supply and a bluetooth module will be needed if we choose to wirelessly connect the board to the computer for tab switching. If this is too complicated, we will discreetly use a long cord to connect the board to our computer.

Diagram for the circuit:[Screen Shot 2023-04-20 at 9.43.01 PM.png] (/users/68127/files/8105622/preview?verifier=EGhVsXvgBVnB6989beBUpvEFsdheqqLZZOT9R5ht)

 

Software: 

Regarding the NPX board, we will need to use GPIO pins to detect the signals from the hardware devices. Consequently, we might need to set these pins properly by enabling PIT interrupts. This software setup might be similar to Lab 2.

 

Regarding the personal computer, we need to make use of software that blocks the computer. This can be implemented by two Python scripts. One of them will be in charge of creating a tab and another one will be in charge of closing that tab. The script will be implemented once the computer receives the bluetooth signal, which will be the output of the NPX board. It will create a new black tab covering the old ones. Once the floor mat stops detecting a certain weight, the bluetooth signal will stop. Therefore, the second Python script will be implemented and the black covering tab will be closed.

[Screen Shot 2023-04-20 at 9.43.41 PM.png] (/users/68127/files/8105624/preview?verifier=rVRt6prR3FutIUF54pmmEH0emAyyKjW274Sq8o0u)
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayl48-gg433-sm2494/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayl48-gg433-sm2494/).

You edit you page in the gh-page branch of this repo.