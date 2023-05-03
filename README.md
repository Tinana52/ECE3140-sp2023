## Your Project Answers

### Project Description

The project we have in mind is a music tuner/mixer. On a high level we plan on basically doing an audio synthesizer. We will input a song (or some kind of a sound) into a microphone, then perform the DFT using the FFT to obtain the frequency information from that sound. Afterwards we can do (some) of the following:

* Record a second sound that will also be transformed into the frequency domain and then convolved with the FT of the first recorded sound 

* This has the same effect as multiplying the sounds in the time domain so this way we could mix different recorded sounds. This transformed sound will be sent to a computer where we can play it back to hear the new sound. 

* Using the buttons on the board specify the scaling factor for speeding out the sound, then playing it back / saving it on the computer

* Essentially creating a synthesizer, by pushing the buttons, we would like the increase or decrease the speed of the existing sound. This transformed sound will be sent to a computer where we can play it back to hear the new sound. First there will be a button that will signal to the microcontroller to start recording audio. We will press it again to get it to stop recording. Then there will be another set of buttons that will control the speed. On the microcontroller based on how many times the button is pressed on the board, it will set off a bunch of calculations that will change the recording. This transformed recording will be uploaded to a computer where we can play it back and listen to the audio. 

* Another idea we have is to use many LEDs lined up in a row(using a breadboard with an external battery, buck converter, and maybe some resistors) and depending on the pitch of the sound, it will change how many LEDs light up in the row. A lower pitch will not have a bunch of LEDs light up while a higher pitch will have many more LEDs light up. The goal is to have the LEDs light up in real time with input from a microphone that will be set up. Basically we can play a song on our phones up to a microphone and this will cause LEDs to light up on the breadboard quickly in response to the song. To calculate the pitches we plan to use the FFT functions from the library to calculate the pitch. We will code on the microcontroller certain thresholds that will control how many LEDs light up. Currently we don’t plan on changing the light of the LED but rather the quantity of LEDs that light up. 
### Technical Approach

The technical approach we intend to take is to use ideas of concurrency, locks, and scheduling as there will be multiple processes going on if we use a microphone and multiple buttons that will take in input (start / stop recording) and control our audio. Our system will simultaneously take in input from the microphone and output LEDs (possibly). Multiple processes will be happening in our system which means we need to schedule the processes so it seems like concurrency is happening. We might also need locks to control user mishaps with the switch pressing. We will also have to configure the ports on the board to connect it to a microphone to read the audio. Some software features would include the Fourier Transform libraries(noted below), the implementation of the microphone/sensor audio values to a frequency based audio(used within the Fourier Transform), and the (depending on the project) implementation of creating a new audio file. 

The resource we will use to calculate the DFT through the FFT is the [CMSIS DSP] (https://www.keil.com/pack/doc/CMSIS/DSP/html/index.html) library that will have support for the functions. 

The microphone we plan to use is an [Electret Microphone Amplifier - MAX4466 with Adjustable Gain] (https://www.adafruit.com/product/1063). 

The peripherals we plan to use are to convert ADC/DAC. We do not plan to use many communication protocols because we are mainly soldering everything on and connecting everything through wires. Based on the microphone we are using and the pins it has we might be using SPI communication but right now based on the microphone we have chosen we plan to not use this communication protocol. To connect the microcontroller to a computer we will be using UART with the cable. 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayl47-dht35-zk66/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ayl47-dht35-zk66/).

You can edit your page in the gh-page branch of this repo.