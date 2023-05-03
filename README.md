## Your Project Answers

### Project Description

We will implement a memory/reflex game on the board using the green and red LED and two of the buttons on the board. During the game, we will randomly generate a sequence of red and green blinks which the player has to match (pressing one button in response to the green LED, and another for the red). The game will verify if the player presses the correct button within a critical time window. The sequence of blinks speeds up as the game goes on, becoming more and more difficult. The game ends when the player presses an incorrect button (not matching the sequence that was displayed) or fails to press the correct button in time. 
### Technical Approach

We are planning to use our FRDM-KL46Z board to display the sequence of blinks and to take in user input through the buttons. SW1 and SW3 are located on opposite sides of the board, so this will be suitable for our purposes. We will not need to use any other peripherals. In terms of software, the code to generate the random sequence of blinks and validate the user input will require a simple Python program, and we will need to write C code using interrupts to respond to user presses of the buttons. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/cqs2-dyc33-gh386/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/cqs2-dyc33-gh386/).

You can edit your page in the gh-page branch of this repo.