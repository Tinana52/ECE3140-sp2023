## Your Project Answers

### Project Description

We are going to build a disco lamp that will flash fun colors.  The lamp will have a switch to put it in "chill mode" or "rave mode".  The modes will dictate the colors which are displayed and the speed at which they change.  The LED strip lights used will be housed inside a reflective dome in order to create an optimal disco effect.  We will have 3 different independently controlled LED strands which can take on any color and blink in patterns that we design.  The board and wiring will be on the back side of the dome so it is out of site when hung from the ceiling. 
### Technical Approach

We are going to use LED Lights with a power and ground input that can be externally powered and digital signal input connected to the board to control color.   We will use a large bowl and a reflective lining (likely tinfoil) to create the reflective dome.  We will use interrupts to create the different LED changing frequencies.  Each change will be a separate process with delays between them.  We will also create flashing processes.  The builtin board switch will be used to switch between the modes this will trigger a context switch.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/el549-jnh84-jsm443/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/el549-jnh84-jsm443/).

You edit you page in the gh-page branch of this repo.