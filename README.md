## Your Project Answers

### Project Description

For our final project, we want to create a memory game using the LEDs where the red and green LEDs blink in some sort of pattern, and the user has to repeat that pattern back using the board’s two buttons: SW1 and SW3, where they are mapped to red and green, respectively. For example, if the pattern is red, red, green, green, red, green, red, the user would have to click SW1, SW1, SW3, SW3, SW1, SW3, SW1 in that order to receive a point. We want to use the LCD display to show the users score. If the user successfully completes the pattern, they move onto the next “level”, where the difficulty scales linearly with one additional LED blink. However, if the user inputs an incorrect pattern, they lose the game, and the score of which level they got up to would be displayed on the LCD screen, and the red and green LED would blink at the same time over and over again to indicate that the game is over. Of course, the user can press the reset button, and try again. We plan to make the LED sequence random, so that the game can theoretically go on infinitely if the user is very skilled at memorizing the LED patterns.

To summarize: the game would begin with one LED blinking. Pressing the corresponding button would increment the player’s score by 1, which would be updated on the LCD display. Then, after a delay, there would be 2 LED blinks in a random pattern. Again, pressing the correct button pattern would increase the player’s score by 1, and so on. When the player does not replicate the pattern correctly, the red and green LED would blink simultaneously infinitely, indicating that the game is over, and the LCD screen would show the final score.
### Technical Approach

We do not plan on using any additional peripherals for this project other than the two buttons on the board (SW1 and SW3), and the LCD display.

To achieve this game, we will first use the two user buttons on the board. When the user clicks one of the buttons, an interrupt will be triggered, and we can match the button clicked with the sequence of the LEDs in our interrupt handler function. The random LED sequence for each “level” will be stored in a linked list data structure, and we will also append the user’s button presses to a linked list, which will be compared together to determine if the user successfully completed a level. If the user’s sequential input matches the corresponding elements in the LED linked list, we know they successfully matched the pattern and can continue. Otherwise, they have failed to match the pattern and the game is over. After one successful completion of a level, we can award the player 1 point by adding onto a score variable. We can store the score variable as a field inside a game state struct that also contains other information about the game, such as whether the game is running or completed.

 We also want to display their points on the LCD panel at all times. While we do not know the specifics of how to display digits on the LCD, we know from photos of the board online that it is possible and should be feasible to implement a running count to track the user’s score, and display that number on the LCD. We would do this in the score incrementing function, where we retrieve the score from the aforementioned score variable, increment it, and update the LCD display with the new score. We would call this function from the interrupt handler once the above winning condition is true (i.e. the pattern matches).

Finally, if the user’s input is incorrect, the game will be over, which would be signaled to the user by the green and red LED blinking at the same time indefinitely with a short delay in between each toggle.
We do not plan on using any additional peripherals for this project other than the two buttons on the board (SW1 and SW3), and the LCD display.

To achieve this game, we will first use the two user buttons on the board. When the user clicks one of the buttons, an interrupt will be triggered, and we can match the button clicked with the sequence of the LEDs in our interrupt handler function. The random LED sequence for each “level” will be stored in a linked list data structure, and we will also append the user’s button presses to a linked list, which will be compared together to determine if the user successfully completed a level. If the user’s sequential input matches the corresponding elements in the LED linked list, we know they successfully matched the pattern and can continue. Otherwise, they have failed to match the pattern and the game is over. After one successful completion of a level, we can award the player 1 point by adding onto a score variable. We can store the score variable as a field inside a game state struct that also contains other information about the game, such as whether the game is running or completed.

 We also want to display their points on the LCD panel at all times. While we do not know the specifics of how to display digits on the LCD, we know from photos of the board online that it is possible and should be feasible to implement a running count to track the user’s score, and display that number on the LCD. We would do this in the score incrementing function, where we retrieve the score from the aforementioned score variable, increment it, and update the LCD display with the new score. We would call this function from the interrupt handler once the above winning condition is true (i.e. the pattern matches).

Finally, if the user’s input is incorrect, the game will be over, which would be signaled to the user by the green and red LED blinking at the same time indefinitely with a short delay in between each toggle.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/rwp227-sg758 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/rwp227-sg758 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.