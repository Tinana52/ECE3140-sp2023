## Your Project Answers

### Project Description

For our final project, we wish to create a morse code game for 2 players. In this game, players each guess a word in morse code every round. During each round, the board will flash a series of dashes and dots on the red and green LEDs, one color for each player, to represent a word in morse code. The player will then enter their guess for what the word is under a time limit through an interface launched on the terminal. The player has three guesses for each turn of the game, and they will receive confirmation on the terminal as to whether their guesses are correct. The number of correct guesses will be displayed on the terminal. The first player to correctly guess five words wins the game. The winner will be displayed on the terminal when the game terminates. At any point, the players can restart the game by pressing the reset button on the board.
### Technical Approach

To make the game more challenging, we plan to use ambiguous morse code words, which are words that share the same frequency. We plan to store a database of these words in a .csv file and reading the file into our C program. The C program will then randomly select words from this input data set and flash these words as morse code. We plan to use PuTTY to control input/output to the terminal, and the board LEDs will be used to flash dashes and dots. We will use PIT timers to control the timing for LED flashes, as well as the countdown time for players to input their guess.
To make the game more challenging, we plan to use ambiguous morse code words, which are words that share the same frequency. We plan to store a database of these words in a .csv file and reading the file into our C program. The C program will then randomly select words from this input data set and flash these words as morse code. We plan to use PuTTY to control input/output to the terminal, and the board LEDs will be used to flash dashes and dots. We will use PIT timers to control the timing for LED flashes, as well as the countdown time for players to input their guess.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/cg528-eys29 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/cg528-eys29 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.