## Your Project Answers

### Project Description

A Simon-Says like, reaction time, memory game

1. We have 4 LEDS and 4 Buttons, we start all buttons ON for 3 seconds, turn off for a few seconds 

2. We generate a sequence corresponding to the LEDs to flash

3. There will be a wait timer for input, each LED corresponds to one of the buttons. Follow #4. Repeats until you fail, if you fail all the last highest score is displayed on the LCD

4. You have a sequence of x LEDs, if you get it right, you get another sequence of y LEDs, in order to pass you need to remember x + y LEDs and your score is the number of LEDs you can remember

(if this proves to be too challenging,  you have a sequence of x LEDs to remember, if you get it right, we increment the score by 1. a new sequence of x LEDs shows up, and if you get it right, score + 1, and so on)
### Technical Approach

We are planning to use

+ FRDM KL46Z microcontroller - for the LCD display and main logic

+ 4 buttons and 4 LEDs connected to microcontroller via breadboard and jumper wires

+ Potentially might use a RTC (to measure how long the player was playing) and an audio source (to play audio cues, or a victory sound) (time permitting)

We don't have any specific software features besides using MCUXpresso to code the logic for the reaction time game. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/dt425-kl628-vf72/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/dt425-kl628-vf72/).

You edit you page in the gh-page branch of this repo.