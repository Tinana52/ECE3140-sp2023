## Your Project Answers

### Project Description

We want to create a mini whack-a-mole game using buttons and LEDs on a breadboard, and keep score using the microcontroller board. The LED corresponding to a button will light up randomly. We will set a period of time where it is acceptable for the player to press the button. If the correct button is pressed, the player will gain a point, the green LED on the MCU will light up, and the updated score will show up on the board’s LCD screen. Once that set time is passed, the player will gain no points for that round, the red LED on the MCU will light up, and the scoreboard will remain the same.

For each game, the player gets 10 rounds. If their score is 7 or higher, all the green LEDs on the breadboard will switch on. If their score is between 4 and 6, all the yellow LEDs on the breadboard will switch on. If their score is between 0 and 3, all the red LEDs on the breadboard will switch on.

As an extension, we will try to use a GUI to implement an animation that will show up on the laptop screen. When a mole has been whacked on the head, an animation of a mole going back into the mole hole with its eyes crossed will be shown.
### Technical Approach

We will use the buttons for input; LEDs and the LCD screen for output. The peripherals will be attached to a breadboard and be wired to the digital pins of the microcontroller, which controls our whole game. These peripherals require the knowledge of GPIOs and properly sending/receiving signals. In order to detect input coming from the buttons, polling will be implemented with while loops. We will need PIT timers to keep track of time waiting for a player to press a button. We will use a for loop to iterate through the rounds of the game. Concurrency will also be used in the form of round robin scheduling in order to have the LEDs, score change, button polling, and animation appear all at once.

 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/gwl42-jl2846-vml37/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/gwl42-jl2846-vml37/).

You edit you page in the gh-page branch of this repo.