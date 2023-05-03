## Your Project Answers

### Project Description

I'd like to use the LCD segment display to implement a "Mastermind" type game. Each LCD segment will have one of three or four options (e.g A,B,C,D). At the beginning of the game, there will be a randomly generated sequence (e.g AADB) and it will be the goal of the user to guess that sequence. Each round, the user will guess a sequence and the board will let the user know which characters they got right and which characters they got wrong. For example, if the target sequence is AADB and the user guesses BACB, the board will indicate that they got the second and fourth letters correct. The user will keep guessing until they get the correct sequence. Ideally, the LCD will then display the number of guesses it took the user to get the correct sequence.
### Technical Approach

As mentioned above, I will be using the LCD segment display on the board to show the user what their guess is. I plan on using the two buttons on the board for the user to make their guess. One button will be used to cycle through the letters and the other button will be used to move onto the next letter in the sequence. Interrupts from the button will be used to immediately change the LCD display once the user presses the button. I've thought of two ways to show the user which of their letters is correct. Either I'll use the LED's and blink red for incorrect and green for correct (I.e blink red, green, red, green for the example I gave in Question 2) or "lock" the letters they got correct (so if a letter is correct, maintain it on the display between round and have the "next letter" button skip it when pressed).
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ab2233/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ab2233/).

You edit you page in the gh-page branch of this repo.