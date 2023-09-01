void WatchyBrain::drawBahn(bool light, float batt) {


    // ** SETUP **

  int16_t  x1, y1, lasty;
  uint16_t w, h;
  String textstring;
  
  // ** DRAW **

  //drawbg
  display.fillScreen(light ? GxEPD_WHITE : GxEPD_BLACK);
  display.fillRoundRect(2, 2, 196, 196, 8, GxEPD_BLACK);
  display.fillRoundRect(6, 6, 188, 188, 5, light ? GxEPD_WHITE : GxEPD_BLACK);

  display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
  display.setTextWrap(false);

  //this section adds AM or PM to the display
  display.setFont(&Teko_Regular20pt7b);//from slacker_vis.h
  if (currentTime.Hour >= 12) {
    textstring = "PM EDT";//List of US Time Zones: EST, CST, MST, PST, AKST
  } else {
    textstring = " AM EDT";//List of US Daylight Savings Time Zones: EDT, CDT, MDT, PDT, AKDT
 }
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(16, 75);
  display.print(textstring);
  //To change Time Zones, including Daylight Savings Time, see the settings.h section

  //draw hours
  display.setFont(&DIN_1451_Engschrift_Regular64pt7b);
      if (currentTime.Hour > 0 && currentTime.Hour <= 12) {
        textstring = currentTime.Hour;
      } else if (currentTime.Hour < 1) {
        textstring = 12;
      } else {
        textstring = ((currentTime.Hour+11)%12)+1;
      }
//  textstring = currentTime.Hour;
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(183 - w, 100 - 5);
  display.print(textstring);

  //draw minutes
  if (currentTime.Minute < 10) {
    textstring = "0";
  } else {
    textstring = "";
  }
  textstring += currentTime.Minute;
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(183 - w, 100 + 3 + h);
  display.print(textstring);

  // draw battery
  display.fillRoundRect(16, 16, 34, 12, 4, light ? GxEPD_BLACK : GxEPD_WHITE);
  display.fillRoundRect(49, 20, 3, 4, 2, light ? GxEPD_BLACK : GxEPD_WHITE);
  display.fillRoundRect(18, 18, 30, 8, 3, light ? GxEPD_WHITE : GxEPD_BLACK);
  if (batt > 0) {
    display.fillRoundRect(20, 20, 26 * batt, 4, 2, light ? GxEPD_BLACK : GxEPD_WHITE);
  }
  
   
  lasty = 200 - 16;

  //draw steps
  textstring = sensor.getCounter();
  textstring += " steps";
  display.setFont(&DIN_1451_Engschrift_Regular12pt7b);
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.fillRoundRect(16, lasty - h - 2, w + 7, h + 4, 2, light ? GxEPD_BLACK : GxEPD_WHITE);
  display.setCursor(19, lasty - 3);
  display.setTextColor(light ? GxEPD_WHITE : GxEPD_BLACK);
  display.print(textstring);
  display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
  lasty += -8 - h;

  // draw year
  textstring = currentTime.Year + 1970;
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(16, lasty);
  display.print(textstring);
  lasty += -20;

  // draw date
  textstring = monthShortStr(currentTime.Month);
  textstring += " ";
  textstring += currentTime.Day;
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(16, lasty);
  display.print(textstring);
  lasty += -20;

  // draw day
  textstring = dayStr(currentTime.Wday);
  display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
  display.setCursor(16, lasty);
  display.print(textstring);
  lasty += -40;

}
