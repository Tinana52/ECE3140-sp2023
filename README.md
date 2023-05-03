## Your Project Answers

### Project Description

For our project we want to make a wack-a-mole type game using the board. We will have the LEDs flash on and off to represent the “moles” and the two buttons will be used to “wack” the corresponding LED. The LCD screen will display the timer as each game will only last 30 seconds. At the end of the game the screen will display the score which will be calculated based on the accuracy of the “wacks”.
### Technical Approach

* From a software point of view, we want to utilize the buttons, read interrupts, and utilize a lock to protect the score variable. The lock will ensure that the score is properly counted, since both button presses could result in score increase. We will also need to display a count down on the screen and the score. In order to manage this we will need to organize the methods for managing the button interrupts, clock, and locks into header files so that we can access them appropriately. Our main process will activate the led flashing, initialize the score at 0, and activate the channels for interrupts. We will call various functions when the buttons are pushed to check how many points are scored. We will use a battery pack as a peripheral to enhanced the handheld game feeling of our project. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/bmk89-efd45-man229/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/bmk89-efd45-man229/).

You edit you page in the gh-page branch of this repo.