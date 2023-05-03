## Your Project Answers

### Project Description

The general idea is to make a speech-to-text program, then use the text to prompt Open AI’s GPT-4 model (the same model used to implement chatGPT)
### Technical Approach

To achieve this, we would need to hook up a microphone to the board and then use the board’s Audio to Digital converter to get the voice data in digital format. We would then use Google’s speech-to-text API to generate text from the voice data. Finally, we would use this text to prompt chatGPT. 

 

To make the project more involved, we would use one of the switches on the board to light up the red LED which will serve as an indication that the microphone is recording. Also, because of constraints of memory and tokens for the chatGPT model, we limit the recording time to a number of seconds before the board stops recording. 

The microphone to be used:

https://learn.sparkfun.com/tutorials/electret-mic-breakout-board-hookup-guide

 

List of supplies:

Microphone

Breadboard

Wires
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/aoa9-cca54/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/aoa9-cca54/).

You can edit your page in the gh-page branch of this repo.