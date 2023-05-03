## Your Project Answers

### Project Description

This project will use the board as a controller for a simple game. The goal of the game is to roll a ball through a track and not fall off the track. The board, acting as a controller, will provide an angle of tilt to the game controller. Angle of tilt will be used to control the direction of motion of the ball. The player has to tilt the controller in order to control the direction and speed of the ball. Due to the 'inertia' of the ball, players will have to be careful not to speed up too quickly or they risk falling off. 
### Technical Approach

This project will utilize the built in IMU on the board. Taking IMU data from the board and sending it to a computer via a UART line, a python script will interpret the IMU data to get the angle of tilt of the board with respect to vertical. In a pygame script, we can take this tilt angle and apply a force to our virtual ball, which will roll across the screen. A player has to roll the ball from the start of the level to the end of the level without falling off a track. Falling off of the track will simply constitute the center of the ball exiting the given track (which will be made of colored tiles on the screen). Falling off the track will reset the result in a failed level and reset the player. Getting to the end of the track will allow the player to load the next level. The game can include multiple levels where a player has to traverse levels of increasing difficulty. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/bzd4-nrs84/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/bzd4-nrs84/).

You can edit your page in the gh-page branch of this repo.