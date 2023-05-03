## Your Project Answers

### Project Description

I would like to create a water intake sensor and reminder using the FRDM-KL46Z board to help me regulate my own water intake for chronic kidney stone management. This project would essentially entail sensing a specific pattern of movement when attached to a water bottle that would indicate that the user has drank water at a given time. That time would be stored and if the user does not drink water within an appropriate amount of time, the user would be notified via an LED flash.
### Technical Approach

The peripherals necessary to implement such functionality would most likely include the onboard gyroscope, accelerometer, LEDs, and potentially a button that allows the user to dismiss the LED flash notification. The gyroscope and accelerometer are necessary to detect movement indicating drinking (either the removal of the lid on the water bottle, or something like vertical followed by rotational movement — indicating a tilt of the bottle), and the LEDs and button are necessary to indicate to the user that they have not been drinking water at a healthy rate and to disable/enable board output to the user.

As for software features, this project would certainly involve real-time interfacing in order to keep track of how much time has passed since the action of drinking water has been detected (RT scheduling or the RTC peripheral). It would also involve generating an interrupt when the proper movement has been detected so that the board essentially provides the functionality of monitoring aperiodic user input (interrupts and GPIO) as well as providing output via the LEDs.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/kac395/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/kac395/).

You edit you page in the gh-page branch of this repo.