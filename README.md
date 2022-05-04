## Your Project Answers

### Project Description

We plan to design and implement a virtual pet using the FRDM-KL46Z microcontroller. The pet will have two life stages (baby and adult) and two activities (eat and play) for each stage. The pet will react differently to user inputs and animations and audios will be transmitted from the board to the laptop with serial connection and displayed via Pygame. We will also animate the time change over 24hrs and the pet’s status will also change accordingly. The onboard LEDs will also be used as secondary visual effects when an action is happening.
### Technical Approach

We plan to implement the virtual pet through the use of an FSM on the board. Due to time constraints we will be limiting ourselves to two stages (baby and adult) as well as two actions for each stage (eat and play) to keep the needed art files to a reasonably low level. Timed interrupts will be used to change the background of the display to simulate time of day, and interrupts for the two onboard buttons will serve as the user input to select actions. These serve as the major inputs to the FSM which will trigger the FSM stage change and accordingly change the animations and audio effects. The microcontroller will send signals via the serial port to Pygame for displaying animations and producing audio. No peripheral devices will be used other than the connection between the board and a laptop. 

Almost all of the logic will be happening on the board, while Pygame is used solely to play animations and sound by checking the serial output of the board. Rather than fiddling around with animation via code, a folder containing every frame needed will be included in the python file so that we only need to display them with a short delay in between. 

This project would make use of most of the previous lab topics other than concurrency. Outside areas would be the serial port and onboard button inputs. In-person collaborative work would include coding and visual design review. Pixel art files will be created via editing / photobashing modern Tamagotchi sprite sheets. Audio soundbites will also be original work. 
We plan to implement the virtual pet through the use of an FSM on the board. Due to time constraints we will be limiting ourselves to two stages (baby and adult) as well as two actions for each stage (eat and play) to keep the needed art files to a reasonably low level. Timed interrupts will be used to change the background of the display to simulate time of day, and interrupts for the two onboard buttons will serve as the user input to select actions. These serve as the major inputs to the FSM which will trigger the FSM stage change and accordingly change the animations and audio effects. The microcontroller will send signals via the serial port to Pygame for displaying animations and producing audio. No peripheral devices will be used other than the connection between the board and a laptop. 

Almost all of the logic will be happening on the board, while Pygame is used solely to play animations and sound by checking the serial output of the board. Rather than fiddling around with animation via code, a folder containing every frame needed will be included in the python file so that we only need to display them with a short delay in between. 

This project would make use of most of the previous lab topics other than concurrency. Outside areas would be the serial port and onboard button inputs. In-person collaborative work would include coding and visual design review. Pixel art files will be created via editing / photobashing modern Tamagotchi sprite sheets. Audio soundbites will also be original work. 

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/az292-tc575 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/az292-tc575 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.