
# Multi_face_Watchy for Watchy
https://github.com/uCBill/Multi_face_Watchy
Multi_face_Watchy for Watchy by Bill Eichner
based on Brainwork for Watchy (See Below)
https://github.com/BraininaBowl/Brainwork-for-Watchy

Version 1.7.0
Swapped out the Maze Watchface and replaced it with a Calendar Watchface.  
The Calendar Watchface will display a Monthy calendar for the current Month and Year for years from 2020 to 2040.
The Calendar supports the light/dark mode.
Also adjusted percentage "%" symbol position on the Slacker Watchface.

Version 1.6.0
Added Captn Watchface from https://github.com/b-bayport/watchy_captnwednesday
Changed Time format from 24 Hour to 12 Hour AM/PM. Total of 10 Watchfaces with 9 of the Watchfaces having light/dark mode.

Version 1.5.0
Added Teko Watchface.

Version 1.4.0
Widened Minute and Hour Hand to Analog Watchface, for easier viewing. Also added light/dark mode to Analog Watchface.
Added light/dark mode to Animated Train Watchface.
Added modified Mickey Watchface from https://github.com/spinalcode/Mickey

Version 1.3.0
Added Analog Watchface, Animated Train Watchface and removed Brutus Watchface.
(Brutus caused steps to be reset, when switching between watchfaces)
Adjusted date window of analog watchface.

Version 1.2.0
Modified bahn and redub watchfaces to display time in 12 hour am/pm format

Version 1.1.0
Added Slacker Watchface (Linux like Display screen)

![Screenshots](https://github.com/uCBill/Multi_face_Watchy/blob/main/Multi_face_Watchy.gif)

A simple framework containing a handful of some of the old and new various watchfaces with a dark/light mode switch.

The current API key is working for now, but it is recommended that you obtain your own API key.
### Setup your OPENWEATHERMAP APIKEY
TO SUBSCRIBE FOR FREE
1. Go to https://home.openweathermap.org/users/sign_up
2. Add your Username and E-mail address.  Create a password and check that you are 16 years old and over.
3. Check that you agree with Privacy Policy, Terms and conditions of sale and Websites terms and conditions of use.
4. Receiving additional communications are optional.
5. Once completed, you will receive an E-mail asking to sign-in, to confirm your account.
6. You will be asked for Company and Function.  Education seemed to be the most appropriate selection.
7. After you have signed in, go to your login menu and select My API keys to view your key.

### How to install
1. First, setup your Watchy with Arduino according to the [Getting Started](https://watchy.sqfmi.com/docs/getting-started) guide.
2. Open the file *watchy.h* in the folder *Arduino\\libraries\\Watchy\\src\\*.
3. Find the line *void handleButtonPress();* and change it to *virtual void handleButtonPress();* .
4. Download this project and open the file *Brainwork-for-Watchy.ino* in Arduino.
5. Go to the file *settings.h* and change your settings.
6. Connect your watchy to your computer and press ctrl-u to compile and upload the watchfaces.

### How to use
Use the up and down buttons (on the right side) to cycle through the watchfaces. Use the back button (top left) to switch between light and dark mode.

### Troubleshooting
If your battery display is weird and/or some buttons aren't working, you probably have an older model Watchy. Solution:

1. Open the file *config.h* in the folder *Arduino\\libraries\\Watchy\\src\\*.
2. find the line *#define ARDUINO_WATCHY_V20* and change it to either *#define ARDUINO_WATCHY_V10* or *#define ARDUINO_WATCHY_V15*. Save the file
3. Compile and upload the watchface. If it doesn't work, try the other option from step 2.

Have fun!
