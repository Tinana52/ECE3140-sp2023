## Your Project Answers

### Project Description

Our final project idea is a memory game. At the very beginning, the user can select the level of difficulty by pressing the right button n times (as many as they desire), with each consecutive button press resulting in more LEDs displayed. This will be in increments of 8 LED patterns. When the user stops pressing the right button to choose a difficulty, after 5 seconds elapsed, the LED pattern will start. The LEDs will blink in a random pattern for a total of n*8 flashes. Types of LED blinks could include short green, short red, long green, or long red. The user will have to respond with the same pattern by pressing the buttons on the board with respect to each LED. The right button would correspond to the green LED, and the left would correspond to the red one. In the end, the final score will be displayed on the LCD display.  

 
### Technical Approach

We will use the peripherals on the board: the two buttons for user input and the LCD display for showing scores. The user buttons should interrupt when the button is pushed, and the pattern of the interrupts between the two types of buttons and the length of each press will be recorded and compared to the original LED pattern for calculating the score. We will create a form of randomness for selecting and pasting together different types of LED blinks using the stdlib.h library. We also will incorporate components from realtime.h file from lab 5 to time the 5-second delay with respect to the last button push for selecting the difficulty level. These components from realtime.h could also be used to calculate the length of each button press.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/dsp88-pc546/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/dsp88-pc546/).

You edit you page in the gh-page branch of this repo.