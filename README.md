## Your Project Answers

### Project Description

We plan to implement a version of the game “Simon Says,” using LEDs to display the pattern, and buttons for the user to press to repeat the displayed pattern. The traditional version of “Simon Says” includes four colors (red, blue, green, and yellow), so we will attach four LEDs to the board to replicate this. The player will then also need four buttons, so we will also attach four buttons to the board as well. The LEDs will display a pattern the player must replicate, which the player will then do by pressing the corresponding buttons. Each level will get more difficult by extending the pattern by one every round.
### Technical Approach

We also plan to display the player’s score on the onboard LCD screen. For each pattern the player replicates correctly, they will receive one point and the score will be updated. Each round of pattern-displaying will be a single process, so these processes will be scheduled in First-In-First-Out order. We will be randomly selecting patterns to display by using the random function in C to select random integers that will correspond to LED lights.
We also plan to display the player’s score on the onboard LCD screen. For each pattern the player replicates correctly, they will receive one point and the score will be updated. Each round of pattern-displaying will be a single process, so these processes will be scheduled in First-In-First-Out order. We will be randomly selecting patterns to display by using the random function in C to select random integers that will correspond to LED lights.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/asc327-ims68-mtg86 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/asc327-ims68-mtg86 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.