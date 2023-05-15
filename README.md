<!-- ## Your Project Answers

### Project Description

For our project “Hear the Colors!”, the main goal is to design a machine that could transform color into sound, so that we can compose a song using different colors.

To implement this project, we will mainly use a color sensor and a buzzer in addition to our FRDM-KL46Z board. One way to interact with this machine is to first prepare different colors on a long paper strip, then insert this paper into our machine box (which has the color sensor in it) and slowly pull one end of that paper strip through the box. Then as the paper is pulled through and the color on it is scanned by the color sensor, the sensor will send the RGB data corresponding to that color back to the board and our buzzer could then generate sound with different frequencies based on the color. Through some careful arrangement of the colors, we could even play some famous songs using the machine.
### Technical Approach

For peripherals we plan to use the TCS3200 color sensor and a common piezo buzzer. In terms of the hardware, the TCS3200 color sensor reads color by using a 8x8 photodiode array, then it uses the current-to-frequency converter to output a square wave whose frequency is related to light intensity of that color. It can do this procedure for all three primary colors red, green, and blue, so by comparing the ratio between RGB readings we would be able to distinguish more than 3 colors. This is simply because all the colors can be obtained by mixing RGB colors with a different ratio. Another reason for choosing this sensor is since TCS3200 takes digital inputs and outputs, we believe it should not be too hard to interface it with a microcontroller like our ARM Cortex M0 processor. After we read the data and determine the frequency wanted, we send a signal in PWM to the piezo buzzer. The buzzer part might sound easy, but it requires us to change the frequency of the PWM signal which might require some more work than if we were to achieve the same thing on a platform like Arduino (although the idea behind should be similar). On the software side, the overall general structure is to write a forever running loop where inside we keep reading the RGB data from the digital pin of the board and compare its values with a certain defined threshold. But once the RGB data exceeds that threshold which means the sensor has detected a color, an interrupt should be generated which should transfer the control to our ISR. Next, in the ISR it quickly compares that RGB data with some ranges we defined to figure out the color and sends the corresponding PWM signal to the piezo buzzer. This way we are able to distinguish colors and play different sounds based on the colors. -->
## Intro:

In this project, we designed a machine that could transform color into sound, so that we can compose a song using different colors. Using RGB data measured by a color sensor, the FRDM board could send different control signals to the piezo buzzer thus making it play different frequency sounds.

## Technical:

For peripherals we plan to use the GY31 TCS3200 color sensor and a piezo buzzer. In terms of the hardware, the TCS3200 color sensor reads color by using a 8x8 photodiode array, then it uses the current-to-frequency converter to output a square wave whose frequency is related to light intensity of that color. It can do this procedure for all three primary colors red, green, and blue, so by comparing the ratio between RGB readings we would be able to distinguish more than 3 colors. This is simply because all the colors can be obtained by mixing RGB colors with a different ratio. Another reason for choosing this sensor is since TCS3200 takes digital inputs and outputs, we believe it should not be too hard to interface it with a microcontroller like our ARM Cortex M0 processor. After we read the data and determine the frequency wanted, we send a control signal to the piezo buzzer to beep it at different tones. On the software side, the overall general structure is to write a forever running loop where inside we keep reading the RGB data from the digital pin of the board and compare its values with a certain defined RGB threshold.

## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ct628-cz236/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ct628-cz236/).

You can edit your page in the gh-page branch of this repo.
