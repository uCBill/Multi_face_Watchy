
# Multi_face_Watchy for Watchy
https://github.com/uCBill/Multi_face_Watchy
Multi_face_Watchy for Watchy by Bill Eichner
based on Brainwork for Watchy (See Below)
https://github.com/BraininaBowl/Brainwork-for-Watchy

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

A simple framework containing a handful of my watchfaces with a dark/light mode switch.

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
