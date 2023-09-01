void WatchyBrain::drawClockface(bool light, float batt) {

         //background
          display.fillScreen(light ? GxEPD_WHITE : GxEPD_BLACK);  
          display.drawBitmap(0, 0, clockFace_square2, 200, 200, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.fillCircle(100,100,3,light ? GxEPD_BLACK : GxEPD_WHITE);
   
          //Logo
          display.setCursor(80, 40);
          display.setFont(&FreeSerifBoldItalic9pt7b);
          display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
          display.print("Gabel ");
          display.setCursor(54, 60);
          display.setFont(&FreeSerifItalic9pt7b);
          display.print("Chronometrie");

          //date
          String dateDay = "";
          if(currentTime.Day < 10){
            dateDay += "0";
          }
          dateDay += currentTime.Day;
          display.fillRect(140, 88, 27, 24, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.setFont(&FreeSerifBold12pt7b);
          display.setTextColor(light ? GxEPD_WHITE : GxEPD_BLACK);
          display.setCursor(141, 107);
          display.print(dateDay);

          //weekday
          String wDay = dayShortStr(currentTime.Wday);
          wDay = wDay.substring(0,wDay.length() - 1);
          display.fillRect(82, 140, 33, 22, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.setFont(&FreeSerifBold12pt7b);
          display.setTextColor(light ? GxEPD_WHITE : GxEPD_BLACK);
          display.setCursor(81, 158);
          display.print(wDay);

          // draw battery
          display.drawCircleHelper(45, 100, 20, 2, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawCircleHelper(45, 100, 20, 4, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawPixel(65, 100, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawFastVLine(45, 79, 4, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawFastHLine(63, 100, 4, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawFastVLine(45, 118, 4, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.setFont(&FreeSerifBoldItalic4pt7b);
          display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
          display.setCursor(44, 76);
          display.print("1");
          display.setCursor(70, 97);
          display.print("1");
          display.setCursor(69, 101);
          display.print("--");
          display.drawPixel(71, 100, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.setCursor(69, 107);
          display.print("2");
          display.setCursor(43, 127);
          display.print("0");
          display.fillCircle(45, 100, 2, light ? GxEPD_BLACK : GxEPD_WHITE);
          double batteryCurrent = (getBatteryVoltage() - 3.3) / 0.9;
          double batteryAngle = batteryCurrent * 180;
          double radBattery = ((batteryAngle) * 71) / 4068.0;
          double bx1 = 45 + (sin(radBattery) * 16);
          double by1 = 100 + (cos(radBattery) * 16);
          display.drawLine(45, 100, (int)bx1, (int)by1, light ? GxEPD_BLACK : GxEPD_WHITE);

          //minute pointer
          int currentMinute = currentTime.Minute;
          int minuteAngle = currentMinute * 6;
          double radMinute = ((minuteAngle + 180) * 71) / 4068.0;
          double mx1 = 100 - (sin(radMinute) * 85);
          double my1 = 100 + (cos(radMinute) * 85);
          display.drawLine(97, 103, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(98, 102, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(99, 101, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(97, 97, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(98, 98, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(99, 99, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(100, 100, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(101, 101, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(102, 102, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(103, 103, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(101, 99, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(102, 98, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(103, 97, (int)mx1, (int)my1, light ? GxEPD_BLACK : GxEPD_WHITE);


          //hour pointer
          //To change Daylight Savings Time, see the settings.h section
          int currentHour= currentTime.Hour;
          double hourAngle = (currentHour * 30) + currentMinute * 0.5;
          double radHour = ((hourAngle + 180) * 71) / 4068.0;
          double hx1 = 100 - (sin(radHour) * 55);
          double hy1 = 100 + (cos(radHour) * 55);
          display.drawLine(96, 104, (int)hx1, (int)hy1, light ? GxEPD_WHITE : GxEPD_BLACK);
          display.drawLine(96, 96, (int)hx1, (int)hy1, light ? GxEPD_WHITE : GxEPD_BLACK);
          display.drawLine(104, 104, (int)hx1, (int)hy1, light ? GxEPD_WHITE : GxEPD_BLACK);
          display.drawLine(104, 96, (int)hx1, (int)hy1, light ? GxEPD_WHITE : GxEPD_BLACK);
          display.drawLine(97, 103, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(98, 102, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(99, 101, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(97, 97, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(98, 98, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(99, 99, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(101, 101, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(102, 102, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(103, 103, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(101, 99, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(102, 98, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);
          display.drawLine(103, 97, (int)hx1, (int)hy1, light ? GxEPD_BLACK : GxEPD_WHITE);


        }
/*};

WatchFace m(settings); //instantiate your watchface, added (settings) wre

void setup() {
  m.init(); //call init in setup
}

void loop() {
  // this should never run, Watchy deep sleeps after init();
}
*/
