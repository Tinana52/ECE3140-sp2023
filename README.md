## Your Project Answers

### Project Description

Idea 1: Message Display

The basic idea of our project is scheduling messages on a LCD board. We intend to have a script on a laptop connected to the board which can intake messages from the attached laptop keyboard (and software). These messages will then be sent to the board.

 

Idea 2: Friend Bot

The program asks how the user feels today, to which the user can press a button to select one from a couple of options on the LCD display: happy, sad, stressed, hot, cold, or tired as some potential ideas. Based on the selection, it will display a message on the screen, using a queue if we choose to have multiple messages per option.

 

* We had multiple ideas and didn’t know which would be most appropriate for the project so we provided both. Let us know which you think would be a better choice.
### Technical Approach

Idea 1:

Using a blocked locking system, the program will attempt to display these messages on the LCD screen as they are received in real time. If it is not in use, it will be displayed immediately. However if it is in use, the message will be added to a blocked queue. Additionally, using a button, the user can set a message to “read”, making it no longer be displayed on the screen.

 

Idea 2:

It will concurrently activate other devices depending on the option picked. For example, if the person feels hot, they can select this option by pressing the button which could display “Make sure to stay hydrated!” on the LCD display and turn on a fan that interfaces with FRDM board through GPIO pins. We plan to use some of the electronic components, including the fan, from the Arduino MEGA 2560 Complete Starter Kit: [ELEGOO MEGA2560 MANUAL Pdf Download | ManualsLib] (https://www.manualslib.com/manual/1353374/Elegoo-Mega2560.html).

 

* We had multiple ideas and didn’t know which would be most appropriate for the project so we provided both. Let us know which you think would be a better choice.

 
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/dmp282-fmr35-ssh93/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/dmp282-fmr35-ssh93/).

You edit you page in the gh-page branch of this repo.