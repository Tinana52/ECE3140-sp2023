## Your Project Answers

### Project Description

We are going to create a red light green light game where we take the board’s capacitive touch as an input (ie to move forward, right and left) and transmit that information (using UART) to a Python program using Pygame as the GUI. The goal is to move across the screen to the end while dodging obstacles, only moving while the light is green. If you move during the red light, you lose the game.
### Technical Approach

* Peripheral: capacitive touch slider, LEDs, and UART Serial

* Software features: interrupts, UART communication, Pygame

* We will use an interrupt, loaded with a randomly generated value, to change between the red and green lights (indicated by the LEDs).

* The interrupts will trigger LEDs as well

* We will split the capacitive touch slider into three sections: move left, move forward, and move right)

* We will transmit the input on the board and the lighting changes to the Python game

* We will use another interrupt to check every millisecond whether there is input while the light is red. 
* Peripheral: capacitive touch slider, LEDs, and UART Serial

* Software features: interrupts, UART communication, Pygame

* We will use an interrupt, loaded with a randomly generated value, to change between the red and green lights (indicated by the LEDs).

* The interrupts will trigger LEDs as well

* We will split the capacitive touch slider into three sections: move left, move forward, and move right)

* We will transmit the input on the board and the lighting changes to the Python game

* We will use another interrupt to check every millisecond whether there is input while the light is red. 

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/brk57-cds258-jwl266 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/brk57-cds258-jwl266 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.