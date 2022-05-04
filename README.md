## Your Project Answers

### Project Description

We were inspired by the Bop It projects we saw on the old final project page. We are attracted to this idea for multiple reasons. Firstly, we would like to explore more of the input/output functionality of the board (we'd like to include the sensitive touch bar and the LCD display). Secondly, Bop It is a modular project that we can easily measure our progress on – we are planning on starting with some simple functionalities: an LED's number of flashes will indicate which action to take, and those actions will initially consist of pressing either button. We can then expand on the actions to include ones such as "Pet It" (touching the touch bar), "Shake It" (shaking the board, which will require the accelerometer), and maybe "Really Shake It" (which means shaking the board aggressively). We can also expand to the LCD display, using the LCD display to write a digit that represents which move to take.

For every “wrong” action that does not match the instruction, we can use the GPIO to blink the red LED, otherwise we blink the green LED which can also be used for keeping a tab on the score of the game. We also plan to implement a timer for each level, where the higher the level is, the shorter the time gets (thus making each level more difficult than the last).
### Technical Approach

We are not 100% sure yet exactly which peripherals we will use. We would like to explore the switches, touch bar, perhaps the accelerometer, and the LCD display. We will use the peripherals native to the board. One external peripheral we saw from the old projects was playing a sound from the laptop connected to the board to signify winning, losing, and passing the round. So we may investigate using this as well. From the manual we see that we use pins PTE25, PTC5, PTD1 to interact with the accelerometer, TSI0_CH9/PTB16 and TSI0_CH10/PTB17 for the touch bar, and PTD5/PTE25 for the green and red LEDs.
We are not 100% sure yet exactly which peripherals we will use. We would like to explore the switches, touch bar, perhaps the accelerometer, and the LCD display. We will use the peripherals native to the board. One external peripheral we saw from the old projects was playing a sound from the laptop connected to the board to signify winning, losing, and passing the round. So we may investigate using this as well. From the manual we see that we use pins PTE25, PTC5, PTD1 to interact with the accelerometer, TSI0_CH9/PTB16 and TSI0_CH10/PTB17 for the touch bar, and PTD5/PTE25 for the green and red LEDs.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/am2265-at564 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/am2265-at564 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.