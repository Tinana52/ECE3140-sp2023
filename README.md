## Your Project Answers

### Project Description

We are planning on making a game, “Prelim Hell”, where the player has to dodge incoming papers, projects, and exams. The objective is to survive as long as possible in “Prelim Hell”. The player will be able to move in all directions by tilting the board. Additional features we hope to implement if time allows are:

* Implement Offensive: The player will be able to shoot a bullet by pressing the attack button. By doing so, the player can kill the enemies right in front of them.

* Implement Powerup: The player will be able to pick up powerup items to use against the enemy. The player can hold one power up item at a time. And will be able to use it by pressing a different button.
### Technical Approach

* Accelerometer for motion controls: In order to determine which way the board is being tilted we would use the accelerometer. Based on its output we would be able to determine the direction of acceleration due to gravity (down), which we would then use as a reference for the board’s orientation. 

* Communication via UART: We are mainly using the board as a mechanism to control the player, the game itself will be displayed on a computer. We will connect the board to the computer using the UART port. 

* Buttons for offensive control: We will use one button to allow the player to shoot, and another to allow the player to activate power ups. 

* For the software features, we intend to create a UI to display the game and the user’s motion in correspondence to the board moving in space. A possible implementation of the UI that we are thinking of is using the Python library pygame, which supports building simple games such as the one that we are planning.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ch687-gjt29-ll676/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ch687-gjt29-ll676/).

You edit you page in the gh-page branch of this repo.