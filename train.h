/*
SmartWatch
https://github.com/theRealc2c2/SmartWatch

Based on Bahn-for-Watchy
https://github.com/BraininaBowl/Bahn-for-Watchy

Based on SmatWatch
https://github.com/theRealc2c2/SmartWatch

Face for Watchy watch
https://watchy.sqfmi.com
*/
void WatchyBrain::drawTrain(bool light, float batt) {

      int16_t  x1, y1;
      uint16_t w, h;
      String textstring;
      int frame;
      int mn;

      //resets step counter at midnight everyday
      if(currentTime.Hour == 00 && currentTime.Minute == 00) {
        sensor.resetStepCounter();
      }
      
      // ** DRAW **

      //drawbg
      display.fillScreen(light ? GxEPD_WHITE : GxEPD_BLACK);  
      display.setFont(&Teko_Regular40pt7b);
      display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
      display.setTextWrap(false);

      //draw animated image
      mn = currentTime.Minute-59;
      frame = mn*12;
      display.drawBitmap(frame, 159, epd_bitmap_train_an, 908, 41, light ? GxEPD_BLACK : GxEPD_WHITE);
      
      //draw time
      if (currentTime.Hour > 12) {
        textstring = ((currentTime.Hour+11)%12)+1;
      } else if (currentTime.Hour < 1) {
        textstring = 12;
      } else {
        textstring = currentTime.Hour;
      }
      textstring += ":";
      if (currentTime.Minute < 10) {
        textstring += "0";
      } else {
        textstring += "";
      }
      textstring += currentTime.Minute;
      
      //This option displays am or pm to 12 hour clock
      if (currentTime.Hour >= 12) {
        textstring += "PM";
      } else {
        textstring += "AM";
      }
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(100-w/2, 90);
      display.print(textstring);
      
      // draw battery
      display.setFont(&Poky20pt7b);
     float VBAT = getBatteryVoltage();
     if(VBAT > 4.2){
        textstring = "T";
     }
     else if(VBAT > 4.05 && VBAT <= 4.2){
        textstring = "5";
     }
     else if(VBAT > 3.9 && VBAT <= 4.05){
        textstring = "4";
     }
     else if(VBAT > 3.75 && VBAT <= 3.9){
        textstring = "3";
     }    
     else if(VBAT > 3.6 && VBAT <= 3.75){
        textstring = "2";
     }    
     else if(VBAT > 3.45 && VBAT <= 3.6){
        textstring = "1";
     }    
     else if(VBAT <= 3.45){
        textstring = "Q";
     }
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(15, 35);
      display.print(textstring);

      display.setFont(&Teko_Regular12pt7b);

      //draw steps
      textstring = sensor.getCounter();
      textstring += " steps";
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(155-w/2, 145);
      display.setTextColor(light ? GxEPD_BLACK: GxEPD_WHITE);
      display.print(textstring);

      // draw day of week
      textstring = dayStr(currentTime.Wday);
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(50-w/2, 120);
      display.print(textstring);


      // draw date
      textstring = monthShortStr(currentTime.Month);
      textstring += " ";
      textstring += currentTime.Day;
      textstring += ", ";
      textstring += currentTime.Year + 1970;
      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(50-w/2, 145);
      display.print(textstring);

    }
