## Your Project Answers

### Project Description

Our proposed project is an audio effects unit. We plan to use a guitar, plug it into an audio jack, and then solder wires from the audio jack to headers that can be connected to the board’s GPIO pins. We will use the board’s 16-bit ADC to convert the audio data into bits, and then run algorithms on it that will apply various audio effects (such as distortion or reverb). The user can press buttons to toggle between these effects. We can send this data through the board’s DAC, or just send the digital data to a GPIO pin. We can connect wires from the board to an audio plug, which can then be plugged into an amp and hopefully play our modified signal. 
### Technical Approach

We need some form of I/O in order to interface with the audio input (guitar) and audio output. We will be using the GPIO pins on the board in conjunction with Audio jacks which we will solder. We will also be using the board’s built in ADC and DAC. In terms of software we will be making use of IO and interrupts so that the input signal can be read, and buttons will interrupt to switch between the different audio effects. In addition, there will be concurrency implemented so that the signal can be read from the input while simultaneously outputting audio through the output. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ehg54-hw533-slw259/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ehg54-hw533-slw259/).

You edit you page in the gh-page branch of this repo.