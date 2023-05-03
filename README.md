## Your Project Answers

### Project Description

We plan to make a small scale robotic assembly arm. The idea as of right now is to use roughly 3 servos, 3 potentiometers, the board, and popsicles( or just a small lightweight strong material that the servos can move) to create the arm and allow it to pick up extremely small objects like pennies ,quarters ,dimes etc. The potentiometers would allow a person to control the rotation of base, up and down movement of the joint, and control over opening and closing the claw. In essence the board is going to be used to gather the signals coming from the potentiometers and output signals to the servos to turn however many degrees.
### Technical Approach

In terms of peripherals, we will be using potentiometers and servos. Most of the technical approach was stated in the high level description. Details to add is that we will be trying to implement a PWM signal to signal to the servo how many degrees to turn. Since the device is not an Arduino we can not simply hard code the degrees of motion like "servo.write(45)". We need to implement code that will send a PWM signal to the servo so that the servo will turn as the potentiometer turns. We are not sure how to properly implement the signals from the potentiometer but as of right now we are assuming it is a similar approach to Arduino. Our board has analog pins so it seems that we will simply hook up the pots(we will refer to potentiometers as this to make it easier to type) to power, ground, and the analog pins and read the values that the board detects. From there we will make those values to a scale for the servos so that it will be easier to interpret the degrees the servo is supposed to turn. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/app67-dtt34/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/app67-dtt34/).

You edit you page in the gh-page branch of this repo.