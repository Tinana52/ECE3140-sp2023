## Your Project Answers

### Project Description

Our idea revolves around representing audio with LEDs. We would take a song/mp3 file and convert it (most likely using Python) into a usable data structure such as a byte array. Using Python, we will convert the byte array into our own data structure that will easily be able to be represented by LEDs. We will connect our FDRM board to a programmable array of LEDs in which we will represent the music. Our choice of how our LEDs will represent audio depends on the dimensions of our LED array. If we decide to use an LED strip, then we associate each LED on the strip to a band of audio frequency which we turn out if it passes a certain threshold of intensity in the song. In this way, our strip will act similarly to an audio waveform often found in music videos. If we find an easily programmable square grid of LEDs, we can even better represent this waveform.

The dimensions of our LED strip will be based on the availability of what we can purchase.
### Technical Approach

The FDRM board is equipped with many I/O pins on the side used for connecting external peripherals. We will look for available programmable LED strips that use this type of connection. If we fail to find any, we can simply find many individual LEDs to connect. The I/O protocol we use (UART, GPIO, etc) will depend on what we find. If we resort to individual LEDs, we will most likely use GPIO.

We will most likely use Python to convert mp3 files into byte arrays and then into an integer array using built-in Python libraries. From the data structures that are output, we will convert these into the specific information that we want to send to the FDRM board.
The FDRM board is equipped with many I/O pins on the side used for connecting external peripherals. We will look for available programmable LED strips that use this type of connection. If we fail to find any, we can simply find many individual LEDs to connect. The I/O protocol we use (UART, GPIO, etc) will depend on what we find. If we resort to individual LEDs, we will most likely use GPIO.

We will most likely use Python to convert mp3 files into byte arrays and then into an integer array using built-in Python libraries. From the data structures that are output, we will convert these into the specific information that we want to send to the FDRM board.

## Feedback.

## Welcome team! Please edit me.
### You can use the 'main' branch for you code.
### The GitHub web-page should be in the 'gh-pages' branch
You can access the page adding a "pages" prefix to the url for the git repo e.g. if your browser currently shows https://github.coecis.cornell.edu/ece3140-sp22/jal496-sjm395 then the GitHub page is at https://pages.github.coecis.cornell.edu/ece3140-sp22/jal496-sjm395 . You can edit the source in the gh-pages branch or use the "automatic page generator" acessible via settings->options in the GitHub Pages Section toward the bottom. We recommend the latter approach since it is quick and easy. We made an initial wepage that you can edit and a description of the headings we expect to see.