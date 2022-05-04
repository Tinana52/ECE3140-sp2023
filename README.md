## Your Project Answers

### Project Description

'Quick Reflexes' is a reflex and memory game, reminiscent of the Nintendo Switch Brain games, where the objective is to try to press a specific key or sequence of keys as quickly as possible within a certain time interval. This is a multiplayer game where each player is competing to be the quickest and most accurate in their key presses when they are playing in their respective turns. 

At the end of a player’s turn, we will show their accuracy (as a percentage) and time score and at the end of the game the final scores will be computed and the winning player will be declared.

Bonus (may also implement this if complexity of above is not enough): We are also considering adding another “level 2” game (separate from the keyboard-based game above) where reflexes will be tested based on moving the microcontroller board rather than pressing a key. For example, the word “left” may pop up on the screen indicating that the player should tilt the microcontroller board to the left. This will be done using an accelerometer. Points will be determined in the same way as before (time and accuracy).
### Technical Approach

We are going to use a keyboard as an external peripheral for each player's key presses. We will be polling for input so that a key press can be registered. If a key press or sequence of presses matches the prompt shown on the computer screen, the green LED blinks. Any errors in the key presses cause the red LED to blink, providing feedback to the user at each step of the game.

We will have three steps/actions in our game and the entire gameplay for a player will consist of a permuted sequence of these actions.

Action 1: Pressing a key as quickly as you can after seeing it displayed on the screen

Action 2: Memorizing a sequence of letters and pressing the keys in that sequence as fast as you can 

Action 3: Press a key repeatedly for as long as you can without slowing down

We are going to use real-time process scheduling to schedule the sequence of the actions above in the gameplay. We will use a random number generator to generate a random number within a 0.5 sec to 2 sec range to decide the start time of the next action after the current action has been completed. This introduces randomness to when the next step in the game takes place, which is good for checking a user’s vigilance and reflexes. It also prevents the game from being predictable.

The gameplay actions will be displayed to the user on the computer screen. We plan on using some standard C graphics code to display something on the screen, and then clear it for the next action to be displayed.
We are going to use a keyboard as an external peripheral for each player's key presses. We will be polling for input so that a key press can be registered. If a key press or sequence of presses matches the prompt shown on the computer screen, the green LED blinks. Any errors in the key presses cause the red LED to blink, providing feedback to the user at each step of the game.

We will have three steps/actions in our game and the entire gameplay for a player will consist of a permuted sequence of these actions.

Action 1: Pressing a key as quickly as you can after seeing it displayed on the screen

Action 2: Memorizing a sequence of letters and pressing the keys in that sequence as fast as you can 

Action 3: Press a key repeatedly for as long as you can without slowing down

We are going to use real-time process scheduling to schedule the sequence of the actions above in the gameplay. We will use a random number generator to generate a random number within a 0.5 sec to 2 sec range to decide the start time of the next action after the current action has been completed. This introduces randomness to when the next step in the game takes place, which is good for checking a user’s vigilance and reflexes. It also prevents the game from being predictable.

The gameplay actions will be displayed to the user on the computer screen. We plan on using some standard C graphics code to display something on the screen, and then clear it for the next action to be displayed.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/as2964-kaj94-vs339 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/as2964-kaj94-vs339 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.