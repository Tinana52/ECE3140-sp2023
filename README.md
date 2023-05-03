## Your Project Answers

### Project Description

We plan to make a bluetooth-controlled pager. A pager is a system of writing numbers which have meanings attached to them. For example, the sequence 07734 is hello and 143 is I love you. We will use bluetooth to connect our phone to the board. We would like to be able to input numbers into the phone and then be able to display the sequence of digits in morse code on the board using the LED lights and also display the numbers on the LED display. A possible extension is to be able to identify “important” messages such as 911 (which means Emergency) or 52 (which means hurry) which are priority messages that can interrupt the currently displayed message and display this one first.
### Technical Approach

Peripherals we plan on using are a bluetooth adapter/dongle to interface with the Freedom board and support the bluetooth pairing feature and a USB adapter to power the board.

 

We plan on writing our code in C. Software features will include functions to display to represent our morse code digits and functions to control timing of our display. We will need to consider how we will read in user input from the phone and connect it to the board. To maintain our priority messages and current messages in a queue, we can use a linked list and interrupts.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/alk248-ama376/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/alk248-ama376/).

You can edit your page in the gh-page branch of this repo.