## Your Project Answers

### Project Description

I want to make a mini piano/synthesizer player. My idea is to use the accelerometer to detect the tilt of the board, which will control the note played by a buzzer. I can then program a button that plays the note when pressed/held, and I'd also like to program the capacitive touch slider to be a pitch wheel/bender for small modulations up/down from a given note. I figure I can also have a couple pre-saved tunes that can be listened to by the press of a button.
### Technical Approach

On the FRDM, I plan to use several of the push buttons, the capacitive touch slider, and the accelerometer. I can also use the LEDs to differentiate between play/listen modes to the user. I also plan to use an active buzzer along with a battery from an Arduino kit that I have (I have to look into whether I can directly interface these with the FRDM or if it is better to wire these through the Arduino itself, and then hook up the two boards). On the software side, I can probably use polling to detect the button pushes. I will have to look into the documentation/packages about acquiring and using the accelerometer and the capacitive touch slider on the FRDM, as well as the buzzer on the Arduino. I also assume I can build my project using the concurrency/timesharing package that we have created in the past few labs.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/ngp37/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/ngp37/).

You can edit your page in the gh-page branch of this repo.