## Your Project Answers

### Project Description

We would like to make a pacman game where the player uses the board as a remote controller.
### Technical Approach

We plan on mainly using the board's accelerometer to get the game inputs. Based on the angular positions we will determine the direction that the game input should be similar to the classic pacman joystick. We will also use the onboard LEDs to indicate the direction of the input. We can do this since there are 4 directions and we can make 4 state combinations with the 2 LEDs. Once we have determined the proper input for the game, we will send the input from the board to the computer where the game is being displayed via UART serial communication. We will use Python to read in data from the serial communication and use the data as inputs for the game that will also be implemented in Python. Additionally, we may use the touch slider for additional moves in the game if time permits. In terms of implementing the pacman game, we may follow a tutorial online and use graphics libraries for Python to implement the display.
We plan on mainly using the board's accelerometer to get the game inputs. Based on the angular positions we will determine the direction that the game input should be similar to the classic pacman joystick. We will also use the onboard LEDs to indicate the direction of the input. We can do this since there are 4 directions and we can make 4 state combinations with the 2 LEDs. Once we have determined the proper input for the game, we will send the input from the board to the computer where the game is being displayed via UART serial communication. We will use Python to read in data from the serial communication and use the data as inputs for the game that will also be implemented in Python. Additionally, we may use the touch slider for additional moves in the game if time permits. In terms of implementing the pacman game, we may follow a tutorial online and use graphics libraries for Python to implement the display.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/slt83-tjl223 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/slt83-tjl223 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.