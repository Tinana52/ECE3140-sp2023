## Your Project Answers

### Project Description

Alarm Clock:

We intend to use our board to control a smart alarm clock.

We will be able to configure a scheduled wake up time through our board buttons. At wake up, our board will drive a small speaker (to be purchased) and will play a tone until the alarm is turned off.

The smart aspect of the alarm clock comes from the configurable ways through which we can turn off our alarm. For light sleepers, a simple button press will turn off the alarm. For more tired users, the board will need to detect a number of jumping jacks before shutting off the alarm.

 

Our satisfactory goals described above (and listed below) are a bare minimum we hope to achieve for our project. Good scope is reasonable goals we think are achievable, and excellent scope are “reach” goals we will attempt if we have time to spare.

 

Our “good” goals involve setting up functionality that will allow our alarm to detect movement when put on the side of our bed. Based on this movement, we will wake up users up to half an hour early if we conclude they are in a “light” phase of sleep.

Our “good” scope also includes more options for turning off the alarm. Namely, utilizing the light sensor. Additionally, we will add quality of life functions such as a gradual ramping up of volume.

 

For excellent scope we will likely only choose one of the options listed below. Namely, we will either have a complex game which needs to be completed successfully in order to turn off the alarm, or implement capacitive control for scheduling a wake up time.

 

Our goals are structured in a way that allows us to incrementally use new components of our board to implement different features.

Satisfactory:

* Alarm clock that plays a tone after a set amount of configurable time. (configurable from the board.)

* Alarm stops on button press or shaking the board(jumping jacks?).

 

Good:

* Wakes up not in Deep Sleep based on accelerometer (checks motion in bed) within 30 minutes of window.

* Doesn’t stop beeping until light turns on.

* Modify volume to gradually get louder as time goes on. 

 

Excellent:

Tasks needed to be satisfied for alarm to stop (Easy to hard tasks, these would be randomized)

* Press the corresponding LED that lights up: simple memory game

* Push on capacitance touch sensor: use the sensor as a slider to set the timer period

* Add a countdown timer for the LED Display to indicate the amount of time left for the task to be completed.
### Technical Approach

Technical description:

To control the speaker output, we hope to use an active piezoelectric buzzer, which beeps when a DC voltage is applied to it. Time permitting, we can also attempt to implement a speaker or passive piezoelectric buzzer, which turns on given an AC voltage. This would allow us to have further complexity for whatever tone the alarm plays. As a result, for this implementation, we would have to utilize the onboard DAC to power the speaker. 

 

We may also end up using an external oscillator to have good time sensing capabilities, as we understand that the onboard low-power-oscillator is prone to fluctuations over large time scales.

 

For our board modules, we will need to interface with our buttons, light sensor, GPIO outputs (for our speaker), the accelerometer, and our LCD system. We will also use interrupts from various sources (RTC, PIT, among other possible sources). Excellent scope may include using the capacitive touch slider as well.

Our light sensor is an ADC signal connected to port 22. We will need to look into the format of data received.

 

Our accelerometer communicates over I2C and is connected to port 25 and 24.

 

Our LCD system is connected and controlled via a s401 connection. We will use the sample code and LCD functions provided by the FRDM-KL46Z library to display the time on the LCD screen. 

 

The capacitive touch slider utilizes it’s own signals TSI0 Channels 9 and 10. We will need to use Freescale’s touch sense software to implement parsing of said data.

 

Utilizing all of these modules will take a fair amount of exploration, and we hope to become better embedded systems programmers as a result. Any feedback regarding the feasibility of utilizing all of these separate modules (in terms of workload/difficulty in interfacing) would be very appreciated.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayc62-kc684-nrn25/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayc62-kc684-nrn25/).

You edit you page in the gh-page branch of this repo.