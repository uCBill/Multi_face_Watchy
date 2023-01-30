void WatchyBrain::drawRedub(bool light, float batt) {


    // ** SETUP **

      int16_t  x1, y1;
      uint16_t w, h;
      String textstring, texthold;
      
      //drawbg
      display.fillScreen(light ? GxEPD_BLACK : GxEPD_WHITE);
      display.drawBitmap(0, 0, redub_background, 200, 200, light ? GxEPD_WHITE : GxEPD_BLACK);
      
      display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
      display.setTextWrap(false);

      //dram am/pm
      display.setFont(&Technology18pt7b);
      if (currentTime.Hour >= 12) {
        textstring = " PM";
      } else {
        textstring = " AM";
    }
     //To change Time Zones, including Daylight Savings Time, see the settings.h section
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(30, 90);
      display.print(textstring);


      //draw date
      display.setFont(&Technology18pt7b);
      textstring = dayShortStr(currentTime.Wday);
      textstring.toUpperCase();
      textstring += " ";
      textstring += currentTime.Day;
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(175-w, 90);
      display.print(textstring);

      //draw time
      display.setFont(&Technology40pt7b);

    if (currentTime.Hour > 0 && currentTime.Hour <= 12) {
        textstring = currentTime.Hour;
      } else if (currentTime.Hour < 1) {
        textstring = 12;
      } else {
        textstring = ((currentTime.Hour+11)%12)+1;
      }

      textstring += ":";
      if (currentTime.Minute < 10) {
        textstring += "0";
      } else {
        textstring += "";
      }
      textstring += currentTime.Minute;

      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(97-w/2, 152);
      display.print(textstring);

      // draw battery
      if (batt > 0) {
       display.fillRect(160,53,15*batt,6,light ? GxEPD_BLACK : GxEPD_WHITE);
      }   

}
