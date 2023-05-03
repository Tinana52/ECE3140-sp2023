## Your Project Answers

### Project Description

Our idea for this project is to implement a game similar to Bop It. The user has increasingly shorter periods of time to perform an action on the board, interacting with the board’s available peripheral sensors. Instructions, in the abbreviated form of a single number, will appear on the board’s LCD display. Once the player does an incorrect action or fails to do the correct action in time, the game will end. 
### Technical Approach

This project will use the data from peripheral sensors built into the board as player input for the game. The possible actions could include pressing a button, shaking/moving the board in a certain direction (using the 3-axis accelerometer), and if time permits, using the hand to cover the light sensor or tapping the capacitive touch sensor. It will also use the LCD display to give instructions to the player, as well as the LED lights to show the status of the game (ongoing/lose). 

In terms of software, we will need to use the board’s timer, adjusting the load value as the playing periods become shorter. While the timer is running, any user input will cause an interrupt. If it is the correct user input, the interrupt handler will reset the timer and the game will continue. If the user input is incorrect, the interrupt handler will end the game. If the timer runs out, before any user input is generated, the timer will cause an interrupt that will end the game. We don’t expect the board to need to manage too many processes at once. This project will mostly utilize the GPIO and interrupt concepts learned in Lab 2. We also will likely not need any external libraries, as the game is contained within the board. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/cd494-cek227-ejz25/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/cd494-cek227-ejz25/).

You can edit your page in the gh-page branch of this repo.