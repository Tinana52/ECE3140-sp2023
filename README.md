## Your Project Answers

### Project Description

We plan to create an RC car using the FRDM board and an RF receiver connected to a laptop. With each joystick paired to two of the four motors, we will have full control over the car at all times. We plan to 3D print the body of the car and order appropriate PWM controllers, motors, wheels, and serial communication devices from Amazon (see part list below). See block diagram below for project layout.

If we have allotted time, we could add other sensors such as a sonar sensor which would allow for extra protection and will halt any forward movement if there is something in front of the car. If we were to implement this, the only thing we would have to watch out for is any bugs that might prevent the car movement-wise, so there might have to be many different cases we will have to take into account.
### Technical Approach

An Xbox controller will be paired via bluetooth to the laptop and will transmit position data for each joystick (using a Python script with pygame and serial libraries) via the RF transmitter to the RF receiver on the car’s FRDM board which will then generate appropriate PWM signals for the motors. [Block Diagram.png] (/users/87845/files/8103406/preview?verifier=f9i5bVl0kEiLMnyoP2PvG3MEw5aKaZM5tncwVbU8)

 

Possible Parts (order through CMC)

* RF Transmitter and Receiver: https://www.amazon.com/WWZMDiB-Transmitter-Receiver-Control-Raspberry/dp/B0BDFK55YN/ref=sr_1_1_sspa?keywords=rf+transmitter+and+receiver&qid=1681868750&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExMzVaUkU3R0ZTTzU3JmVuY3J5cHRlZElkPUEwNDYxNTI4MTVTNkRKWlRHSkNLTiZlbmNyeXB0ZWRBZElkPUEwMzk4MjI5MVFIQkdaTzAyWDQ1MyZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

* USB to UART Adapter: https://www.amazon.com/HiLetgo-CP2102-Converter-Adapter-Downloader/dp/B00LODGRV8/ref=sr_1_1_sspa?keywords=usb+to+uart&qid=1681868859&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUExSDExMFkwVVdKNk1YJmVuY3J5cHRlZElkPUEwMDE5NDI2MzlFWjFKUzBJNktIVyZlbmNyeXB0ZWRBZElkPUEwMjA5OTgyMjdaNURVMDdFTVFNRiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

* PWM motor controller: https://www.amazon.com/EPLZON-Trigger-Driving-Adjustment-Electronic/dp/B09LLR675M/ref=sr_1_2_sspa?keywords=pwm+motor+controller&qid=1681869677&sr=8-2-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEySjlMTFFDUDBCRFBJJmVuY3J5cHRlZElkPUEwNzI0Mjg1MzJZUDExN1dZWU5HNyZlbmNyeXB0ZWRBZElkPUEwMTIzMDIxMkdLRTRVN1FVOVZCUiZ3aWRnZXROYW1lPXNwX2F0ZiZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=

* Motors and wheels: https://www.amazon.com/Plastic-Wheel-Motor-Shaft-Arduino/dp/B07P9Z4T2K/ref=sxin_16_pa_sp_search_thematic_sspa?content-id=amzn1.sym.77fb2c04-2466-444a-b28b-02979f4340a7%3Aamzn1.sym.77fb2c04-2466-444a-b28b-02979f4340a7&crid=3NDO14YODHFYX&cv_ct_cx=motor+and+wheel&keywords=motor+and+wheel&pd_rd_i=B07P9Z4T2K&pd_rd_r=ee51b807-6aeb-45d5-8841-46d050fe7a1c&pd_rd_w=rTOYV&pd_rd_wg=JnPtE&pf_rd_p=77fb2c04-2466-444a-b28b-02979f4340a7&pf_rd_r=0Y42HBNKYSZSJMN7H989&qid=1681869052&sbo=RZvfv%2F%2FHxDF%2BO5021pAnSA%3D%3D&sprefix=motor+and+wheel%2Caps%2C88&sr=1-2-1fa5bb29-8495-43da-8896-6cda87f207d0-spons&psc=1&smid=A2GPFK8B5LR2OX&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyOFI1RVBDRENNVVpIJmVuY3J5cHRlZElkPUEwNTQ3MDEzMkpIMFdXMzc1R1lEMyZlbmNyeXB0ZWRBZElkPUEwNTc2OTU5MVMyWVdCT0M1Vkw3RCZ3aWRnZXROYW1lPXNwX3NlYXJjaF90aGVtYXRpYyZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=#customerReviews

* Portable Power Source (5V): 

* Ask Prof Napp
## Your page
You can access your place holder page on [https://pages.github.coecis.cornell.edu/ece3140-sp2023/gpm58-pis7/](https://pages.github.coecis.cornell.edu/ece3140-sp2023/gpm58-pis7/).

You edit you page in the gh-page branch of this repo.