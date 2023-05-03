## Your Project Answers

### Project Description

The general idea is a Morse Code -> Latin Alphabet/Numeric Character | Latin Alphabet/Numeric Character -> Morse Code translator. A keyboard, the LCD display on the board, and an extra board (for power purposes) will be used as well. Our initial ideal case is to be able to represent short words/strings of characters.

Morse Code -> Latin Alphabet/Numeric Character:

The input would be made via one of 3 buttons available on the board. Short press = Dot, Long press = Dash. 1 press of the space bar on the keyboard would signify character separation. Although not sure, we might implement 2 space bar presses to separate words. When done typing in the morse code, press Enter on the keyboard. This will output the deciphered Morse on the LCD screen of the KL board. For confirmation of the visual input, the Morse Code dashes and dots may also be represented on the LCD.

To exit the Morse -> Latin/Digits mode, one will need to press the yellowish button on the board.

This automatically puts you in Latin/Digits -> Morse mode and back when needed.

 

 

Latin Alphabet/Numeric Character -> Morse Code:

The whole input is done via simply typing on the keyboard. The process is done when Enter button is pressed. Then, the board, which receives the textual image, demonstrates the Morse Code version of the text message. For this, the RED LED will be used. The GREEN LED on the other hand will be used to indicate the mode (i.e. when it is ON -> its Morse to Latin, when it is OFF -> its Latin to Morse). For confirmation of the visual output, the Morse Code dashes and dots may also be represented on the LCD.
### Technical Approach

NOTE: BELOW, we noted what first priority challenges we have. Any feedback on any of the issues/questions below would be very appreciated.

 

THREE main extra devices:

LCD on the board -

1) when inputting Morse on the board, it will synchronously show the input on the LCD, to confirm the input is as desired. 

2) After inputting Morse, it will return the desired deciphered sequence of Latin/digits on the LCD

3) In Latin/digits -> Morse case, the LCD will also show the output (Dash, Dot, Delimiter) in real time alongside the flashing RED LED on the board. 

 

For the keyboard-board connection,  USB communication protocols will be used extensively. Note: the keyboard is an actual simple keyboard, not a part of a computer or PC.

 

To power the whole thing, we thought of using a second KL board to power both the main board and the keyboard. HOWEVER, we are not sure how to implement it and would appreciate guidance and help. We consider the alternative of just using a simple 5V battery, connecting the keyboard and the board in parallel.

 

ALSO, we know we will need some type of a look up table for the respective Morse or Latin/digits inputs to convert one to another, but, while we know case statements could be the solution, we might have 50+ cases to go through, which could very badly affect the performance and execution time of the requests. We would appreciate it if you could suggest what the most efficient way to implement this. The closest analogue in another language is Python's Dictionary.

 

Lastly, some help or resources related to the USB protocol would be appreciated, though we will do own research too. This will be needed for the KL board - keyboard connection.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/mlm439-mr982/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/mlm439-mr982/).

You can edit your page in the gh-page branch of this repo.