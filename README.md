## Your Project Answers

### Project Description

We are planning to implement a reaction rhythm game (similar to Guitar Hero or Dance Dance Revolution) on the microcontroller. The player should press a button to start the game and use the slider to select the difficulty of the game. Once the game is ready, a signal will be given via the lights. Then a specific rhythm will be played depending on the difficulty selected. Specifically, the PC will give certain visual and sound cues and the player should press a specific button once they see the cue. The board will then flash green or red depending on whether the press was corrected or missed. There will be a small window of time the player has to react for the hit to be considered valid. The game will keep track of the score, the combo, and the number of misses the player has.
### Technical Approach

We plan on using no external hardware. We will use our board and our PC for the game. We plan on using interrupts to deal with the user inputs and GPIO to display the lights. Concurrency is also needed since multiple lights/buttons might need to be handled at the same time.

For the GUI on the PC, we plan to use Python to implement the game. Specifically, we plan to use PyGame for the GUI and are also open to other packages that might help. We will use the board to handle user inputs and generate interrupts. The main game logic will also be implemented on the board or on the Python program on the PC side.
We plan on using no external hardware. We will use our board and our PC for the game. We plan on using interrupts to deal with the user inputs and GPIO to display the lights. Concurrency is also needed since multiple lights/buttons might need to be handled at the same time.

For the GUI on the PC, we plan to use Python to implement the game. Specifically, we plan to use PyGame for the GUI and are also open to other packages that might help. We will use the board to handle user inputs and generate interrupts. The main game logic will also be implemented on the board or on the Python program on the PC side.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/gz252-rrh56 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/gz252-rrh56 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.