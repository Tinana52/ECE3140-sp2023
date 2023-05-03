## Your Project Answers

### Project Description

We propose a game called “Pong”, played with the FRDM-K64F board. The laptop screen displays the game on a GUI, which contains a ball and a bar. The ball will bounce around the screen up and down. The objective of the game is to keep the ball bouncing by moving the bar left and right. With each successful bounce, the player gain one point. If the bar fails to catch the ball, and the ball falls downs below the bar, the game end.
### Technical Approach

The game front-end will be implemented using PyGame, and will run on a laptop. We plan to reference or perhaps use (and credit) the open source code at this link: [https://github.com/skar91/pong-python.] (https://github.com/skar91/pong-python) The laptop will be connected via a USB cable to the board, and will listen for serial inputs from the board. The board will be running C code that will read data from the accelerometer to read the tilt in the X and Y directions that the user is inputting, and send the appropriate move code over the serial connection. We plan to only look at the tilt in the X direction for moving our slider right and left. In this way, the board will act as a peripheral to the computer that the user can control the game with. We also plan to use the button as an input that can interrupt the game at any time to pause the game. Given extra time, we can create an advanced pause screen that allows the user to either resume or start a new game. The user could select the option by tilting the board in the X direction, causing the program to select the upper or lower option.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/blp73-cl893-sl2322/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/blp73-cl893-sl2322/).

You edit you page in the gh-page branch of this repo.