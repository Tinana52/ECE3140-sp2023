## Your Project Answers

### Project Description

For our project we are planning on making our board into a multifaceted orientation device. First of all the board will be usable as a leveling device. Using the built-in 7 segment display and the built-in accelerometer we will click a button to zero the leveling device and then use those peripherals to determine how much the board has rotated from its original position as well as display the shift in degrees akin to the level app on a phone. Secondly, the board will also be usable as a compass. To achieve this, it will use the built-in 7 segment display and the built-in magnetometer to find the direction the board is facing and then display that position in degrees from north, similar to the compass app on a phone. To switch between these two modes, the user will press a button to toggle the system at will so the orientation device can be used as a level and as a compass when needed. 
### Technical Approach

For our orientation device we will be using several built-in components of the board. The specific peripherals we will be using are: the 7 segment display, the accelerometer, the magnetometer, and the two buttons on the board. We will communicate with the sensors through I2C, and we will have a PIT timer that triggers a refresh of the screen every 30ms (or a reasonably small value). We will also have the buttons trigger interrupts to do different functions. We will also need to make sure that the screen can update while a user is clicking the button (and that button clicks are not ignored if they fall while the screen is updating), so we will use a priority scheduler where user input is highest priority, while polling sensors and updating the screen is lowest priority. Within the same priority, tasks will execute FCFS.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/cjl275-maw346-nsg68/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/cjl275-maw346-nsg68/).

You can edit your page in the gh-page branch of this repo.