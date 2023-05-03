## Your Project Answers

### Project Description

For our final project, we decided to create a game similar to Pokemon Go that involves physical movement and has a partly randomized catching system. This game will be called Embemon Go. The physical and logic parts of the game will be developed using a freedom board and additional peripherals. To complement this, we will also create our own GUI similar to the pokemon storage box showing you your profile statistics and the things you’ve caught. 
### Technical Approach

 

Walking Component

We will need a distance sensor to detect how far a player has moved. Our game will give the player a chance to catch an Embemon for a set amount of distance (for example, every 10 feet). A light will blink to signal for the player to catch the Embemon. 

 

Catching Component

When the player travels the set amount of distance, an LED will turn on, prompting them to react quickly by pressing a button. If the player presses the button in a certain amount of time, a green LED will turn on and a sound will be emitted from a peripheral (speaker). This sound will be characteristic of the Embemon. If the player does not press the button on time, a red LED will flash. Every time the player catches an Embemon, the system will store the number. There will be another button that the player can press, and the number will be shown in the LCD of the freedom board. 

 

GUI Component

The GUI will be developed using python and will complement the board and give the user a visual on their progress. [TBD if a GUI component is necessary] 

 

Temperature Component

We will need a sensor to detect temperature. The type of creature to the player depends on the temperature around the player. For example, a colder temperature will offer the player a creature associated with cold environments. A creature can be identifiable by its sound [and the GUI if implemented].
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/kxl2-mmh257-tic3/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/kxl2-mmh257-tic3/).

You can edit your page in the gh-page branch of this repo.