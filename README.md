## Your Project Answers

### Project Description

The project will be a rhythm game, similar to dance dance revolution, where there are four directions that players will need to correctly input. The player will input these directions by tilting the board forwards, backwards, or sideways. The accelerometer will be used to detect these tilts. We will also utilize the SW1, SW2 and the switches capacitive touch sensor on the board; there will be special notes where players will need to press different buttons to successfully hit those notes. We will not need any special peripherals. The board will be connected to the computer, where the rhythm game GUI will be displayed. The GUI and main game logic will be made in Python, most likely PyGame. The board controls will be done in C (C will be used to poll the accelerometer and read the button presses). This information will be sent to the Python program using UART.
### Technical Approach

We are not going to use any special peripherals other than connecting the board to a computer. Data transmission will be done using UART. For software features, we plan on using different C processes to poll the accelerometer and other controls. On the Python side, we will probably use PyGame to code up the rhythm game GUI and game logic. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/jyw55-rsc257-rw433/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/jyw55-rsc257-rw433/).

You edit you page in the gh-page branch of this repo.