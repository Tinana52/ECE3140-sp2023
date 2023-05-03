## Your Project Answers

### Project Description

We would like to implement a version of the classic brick breaker game where a ball bounces off of a moving platform that is controlled by the player and destroys the bricks it touches. The ball can bounce off of many bricks and will keep bouncing as long there is something for the ball to bounce off of. It can bounce off the ceiling(the top of the game screen), the walls(the sides of the game screen), the bricks, and the controlled platform, but if it falls to the floor, the game is over. If all the bricks are destroyed, the player wins the game.
### Technical Approach

On the software side, we would like to use a python GUI to display and run the game. The python program will receive sensor data from the board (mainly the tilt of the board), and send outputs to be displayed on the board (such as LED feedback). Sending this data over USB could be done using the python serial library. 

The hardware used to detect user input will be the MMA8451Q accelerometer (to detect the tilt), the capacitive touch slider (as an alternative input method, if time permits), and the SW1 and SW3 buttons. 

Feedback will be provided to the player using the LEDs and potentially the LCD display.

We will employ a scheduler with multiple processes to take care of the separate features (such as turning on LEDs, measuring tilt, etc.). Other functionality, such as button presses, may use interrupts. 

 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/kl742-nsk62/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/kl742-nsk62/).

You can edit your page in the gh-page branch of this repo.