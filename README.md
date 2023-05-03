## Your Project Answers

### Project Description

For our project, we are planning to create a “handwriting machine,” which, as the name suggests, handwrites the text that the user inputs onto paper. For example, if the user inputted “Hello World,” our machine would write each letter one by one onto the paper underneath it.

 

To accomplish this, we need motion in three axes: movement to any point on the xy plane (which is the paper) and along the z-axis, which will be used to lower and raise the pen. We plan to create a two-dimensional plotter using two stepper motors and timing belts. Our movement is in a core-XY configuration. Through this method, we will be able to reach any point on the paper underneath the machine. The hand of the device will hold a pen, and writing letters will be a combination of various lines drawn through time delays, such as moving the pen down, moving it in a certain direction for a given time period, and lifting it up again. The up and down motion of the pen will be achieved with a micro servo motor. Additionally, we will use various other components, such as rods and 3D printed parts for the assembly of the machine and motor drive modules for controlling the motors through the board.

 

Note: We already have all the components mentioned in the above paragraph. The apparatus will not be an issue.

 

The software side of this project will be quite straightforward. It will involve breaking the user input into individual letters and having different cases for each letter, similar to how different digits had different sequences of blinks in the Morse code lab. Each letter would have a pre-programmed sequence of lines that need to be drawn, and after a letter is done, the plotter would move to the right and draw the next letter. Our current plan is to support only uppercase letters in the English alphabet. 

 

Our team is confident that this project can be completed within the deadline, and we are very enthusiastic about this idea. We hope you like it as well.
### Technical Approach

GPIO

TPM timer module for PWM

Preemptive scheduling

Interrupts

The board will be used to control the motors. The motors could be rotates by sending a high or a low voltage. The rate of the pulse of the output voltage from the board controls the motors speed. 

Since components are dependent on one another, we will use incremental development throughout the project. With each new addition of a component, we will make sure everything is working properly, and then we will move on.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/bg372-dcb277/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/bg372-dcb277/).

You can edit your page in the gh-page branch of this repo.