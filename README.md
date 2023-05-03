## Your Project Answers

### Project Description

We want to make a signal sensing glove that translates hand gesture language into English and numerical numbers. We will display the translated language on the computer screen, possibly with some images or emojis.
### Technical Approach

For the sensing part, we will make customized force sensors made by pressure sensitive conductive sheets (velostat) and copper conductive fabric. Our customized sensors are able to measure changes in angles of each of the five base knuckles. When a finger is bent around the base knuckle, the force sensor on the knuckle will also be bent and sense a stretch force pushed by the knuckle. The resistance of the pressure sensitive conductive sheet would decrease correspondingly as more force is applied to it. Based on this property, we will use a voltage divider circuit that connects the force sensor and a load resistor (value will be decided through experiments) to convert change in resistance value to voltage analog reading.

 

5 analog pins will be used to read the sensor readings for five knuckles respectively. Each force sensor represents a process and we want 5 processes to run concurrently.  We plan to implement a program that has concurrency features that allow us to detect the 5 analog values of the five knuckles at the same time. We’ll use software calculation to classify readings into two states: linear and bending. We will experiment with our force sensors and come up with the range of resistance values for the two states of fingers. The combination of the 5 analog pin values correspond to one English word or a number in sign language. The program will then display the translated language on the screen.
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/js2796-xl434/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/js2796-xl434/).

You edit you page in the gh-page branch of this repo.