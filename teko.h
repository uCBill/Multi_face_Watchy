void WatchyBrain::drawTeko(bool light, float batt) {
      
      int16_t  x1, y1;
      uint16_t w, h;
      String textstring;
      int temp;

      // ** DRAW **
      display.drawBitmap(120, 77, wifioff, 26, 18, light ? GxEPD_WHITE : GxEPD_BLACK);
      //drawbg
      display.fillScreen(light ? GxEPD_WHITE : GxEPD_BLACK);  
      display.setFont(&Teko_Regular40pt7b);
      display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
      display.setTextWrap(false);

      //draw wifi configured
      display.drawBitmap(120, 77, WIFI_CONFIGURED ? wifi : wifioff, 26, 18, light ? GxEPD_BLACK : GxEPD_WHITE);
      if (BLE_CONFIGURED) {
      display.drawBitmap(100, 75, bluetooth, 13, 21, light ? GxEPD_BLACK : GxEPD_WHITE);
      }
      
      //drawTime
      display.setFont(&Teko_Regular40pt7b);
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

      //this section adds AM or PM to the display
      if (currentTime.Hour >= 12) {
        textstring += "PM";
      } else {
        textstring += "AM";
    }

      display.getTextBounds(textstring, 0, 0, &x1, &y1, &w, &h);
      display.setCursor(100-w/2, 57);
      display.print(textstring);
      
      // draw date
      display.setFont(&Teko_Regular12pt7b);
      textstring = dayStr(currentTime.Wday);
      display.getTextBounds(textstring, 5, 85, &x1, &y1, &w, &h);
      if (currentTime.Wday == 4) {
        w = w - 5;
  }
      display.setCursor(85 - w, 85);
      display.print(textstring);

      textstring = monthShortStr(currentTime.Month);
      display.getTextBounds(textstring, 60, 110, &x1, &y1, &w, &h);
      display.setCursor(85 - w, 110);
      display.print(textstring);

      display.setFont(&Teko_Regular20pt7b);
      display.setCursor(5, 120);
      if (currentTime.Day < 10) {
      display.print("0");
  }
      display.println(currentTime.Day);
      display.setCursor(5, 150);
      display.println(tmYearToCalendar(currentTime.Year));// offset from 1970, since year is stored in uint8_t

     //draw image and steps
      display.drawBitmap(10, 165, steps, 19, 23, light ? GxEPD_BLACK : GxEPD_WHITE);
      textstring = sensor.getCounter();
      display.setCursor(35, 190);
      display.setTextColor(light ? GxEPD_BLACK : GxEPD_WHITE);
      display.print(textstring);

     //draw battery
    display.setFont(&Poky20pt7b);
    int8_t batteryLevel = 0;
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
      display.setCursor(154, 105);
      display.print(textstring);
      
     //draw weather
  weatherData currentWeather = getWeatherData();

  int8_t temperature = currentWeather.temperature;
  int16_t weatherConditionCode = currentWeather.weatherConditionCode;

  display.setFont(&Teko_Regular40pt7b);
  display.getTextBounds(String(temperature), 0, 0, &x1, &y1, &w, &h);
  if (159 - w - x1 > 87) {
    display.setCursor(159 - w - x1, 150);
  } else {
    display.setFont(&Teko_Regular40pt7b);
    display.getTextBounds(String(temperature), 0, 0, &x1, &y1, &w, &h);
    display.setCursor(159 - w - x1, 136);
  }
  display.println(temperature);
  display.drawBitmap(165, 110, currentWeather.isMetric ? celsius : fahrenheit, 26, 20, light ? GxEPD_BLACK : GxEPD_WHITE);
  const unsigned char* weatherIcon;

  //https://openweathermap.org/weather-conditions
  if (weatherConditionCode > 801) { //Cloudy
    weatherIcon = cloudy;
  } else if (weatherConditionCode == 801) { //Few Clouds
    weatherIcon = cloudsun;
  } else if (weatherConditionCode == 800) { //Clear
    weatherIcon = sunny;
  } else if (weatherConditionCode >= 700) { //Atmosphere
    weatherIcon = atmosphere;
  } else if (weatherConditionCode >= 600) { //Snow
    weatherIcon = snow;
  } else if (weatherConditionCode >= 500) { //Rain
    weatherIcon = rain;
  } else if (weatherConditionCode >= 300) { //Drizzle
    weatherIcon = drizzle;
  } else if (weatherConditionCode >= 200) { //Thunderstorm
    weatherIcon = thunderstorm;
  } else
    return;
  display.drawBitmap(145, 158, weatherIcon, 48, 32, light ? GxEPD_BLACK : GxEPD_WHITE);

}
