## Your Project Answers

### Project Description

For our final project, we are planning to implement a version of a memory game in which users must utilize the capacitive touch slider on the FRDM-KL46Z to provide input. Essentially, users will have to swipe left or right on the touch slider depending on if the green or red LED is flashed on. Input will only be detected once the LEDs are done flashing, to force the user to remember the sequence of flashes. The game will get progressively harder as the user continues playing, flashing more lights and also introducing a new input where users will have to swipe up if both LEDs flash at the same time. Additionally, we plan on displaying the user’s score in the 4-digit segment LCD on the board.
### Technical Approach

Our game will not require the use of any peripherals, but instead we plan on using many of the features provided to us on the FRDM-KL46Z board. Specifically, the two LED lights, capacitive touch slider, and 4-digit segment LCD will be utilized to give users enough information on the game. The board comes with both the Capacitive Touch Sensing and LCD Display Library to help aid in the software development of the game. We will have to do a lot of testing with the input handling to make sure that certain swipe directions are mapped correctly. Additionally, we will have to have some sort of memory management to keep track of the game state and keep track of the sequence of user swipes. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ec727-esv33/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ec727-esv33/).

You edit you page in the gh-page branch of this repo.