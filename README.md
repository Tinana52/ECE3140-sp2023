## Your Project Answers

### Project Description

* Main feature is a user interface (displayed on the LCD pad of the board) where users can monitor the train positions at all times. We will use multiple hall sensors placed under the train tracks to detect the trains' position. All the hall sensors/ train segments will be numbered, and the number of the hall sensor/train track which a train has just passed will be displayed on the LCD pad.  

* Supplementary features include a coded “traffic light” (external hardware), placed at a "sensitive region" defined by us. The traffic light will light up when a train is entering the sensitive region soon, and will be turned off when the train has completely exited the region. We will also have a "tunnel", and the LED lights (on the board) will turn on/off when the train enters/ exits the tunnel. At the tunnel, we also want to include a ball-tossing game to the train which has two modes: automated and manually controlled by players, utilizing the button built in on the board. In automated mode, the train will toss the ball before entering the tunnel. The tunnel will be defined at a straight section of the track, so the ball will fall back to the train coach. In the manual mode, the player can control when they want to fire the ball, and the train may not be able to catch it.
### Technical Approach

The IOs on the board that we plan on using are the green and red LED lights, the LCD display board, and a push button. External hardwares including model trains and train tracks, model traffic light, and a solenoid to fire the ping pong ball. 

In general the project is highly dependent on polling. We want to constantly check the signals sent from all the hall sensors and the buttons on the board. The hall sensors' signals would indicate the specific position of the trains. From this information from the hall sensors, we will be able to turn on/off the traffic lights and LED lights on the board. The change of state of the buttons on the board would activate (quickly turn on and off) the solenoid to eject the light-weight ball. 

We will also use hall sensors to detect whether a train has passed and/or leave a specific point to turn on and off the traffic light.
The IOs on the board that we plan on using are the green and red LED lights, the LCD display board, and a push button. External hardwares including model trains and train tracks, model traffic light, and a solenoid to fire the ping pong ball. 

In general the project is highly dependent on polling. We want to constantly check the signals sent from all the hall sensors and the buttons on the board. The hall sensors' signals would indicate the specific position of the trains. From this information from the hall sensors, we will be able to turn on/off the traffic lights and LED lights on the board. The change of state of the buttons on the board would activate (quickly turn on and off) the solenoid to eject the light-weight ball. 

We will also use hall sensors to detect whether a train has passed and/or leave a specific point to turn on and off the traffic light.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/jh2346-sj649-zz236 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/jh2346-sj649-zz236 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.