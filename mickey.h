void WatchyBrain::drawMickey(bool light, float batt) {
          
          //background
          display.drawBitmap(0, 0, ClockBG, 200, 200, GxEPD_WHITE);
          display.fillCircle(100,100,3,GxEPD_WHITE);

          // draw battery
          display.drawCircleHelper(45, 100, 20, 2, GxEPD_BLACK);
          display.drawCircleHelper(45, 100, 20, 4, GxEPD_BLACK);
          display.drawPixel(65, 100, GxEPD_BLACK);
          display.drawFastVLine(45, 79, 4, GxEPD_BLACK);
          display.drawFastHLine(63, 100, 4, GxEPD_BLACK);
          display.drawFastVLine(45, 118, 4, GxEPD_BLACK);
          display.setFont(&FreeSerifBoldItalic4pt7b);
          display.setTextColor(GxEPD_BLACK);
          display.setCursor(44, 76);
          display.print("1");
          display.setCursor(70, 97);
          display.print("1");
          display.setCursor(69, 101);
          display.print("--");
          display.drawPixel(71, 100, GxEPD_BLACK);
          display.setCursor(69, 107);
          display.print("2");
          display.setCursor(43, 127);
          display.print("0");
          display.fillCircle(45, 100, 2, GxEPD_BLACK);
          double batteryCurrent = (getBatteryVoltage() - 3.3) / 0.9;
          double batteryAngle = batteryCurrent * 180;
          double radBattery = ((batteryAngle) * 71) / 4068.0;
          double bx1 = 45 + (sin(radBattery) * 16);
          double by1 = 100 + (cos(radBattery) * 16);
          display.drawLine(45, 100, (int)bx1, (int)by1, GxEPD_BLACK);

          //minute pointer
          int currentMinute = currentTime.Minute;
          int minuteAngle = currentMinute * 6;
          double radMinute = ((minuteAngle + 180) * 71) / 4068.0;
          double mx1 = 100 - (sin(radMinute) * 75);
          double my1 = 100 + (cos(radMinute) * 75);
          display.drawLine(92, 108, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(93, 107, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(92, 92, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(93, 93, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(107, 107, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(108, 108, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(107, 93, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(108, 92, (int)mx1, (int)my1, GxEPD_WHITE);
          display.drawLine(94, 106, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(95, 105, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(96, 104, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(97, 103, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(98, 102, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(99, 101, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(94, 94, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(95, 95, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(96, 96, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(97, 97, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(98, 98, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(99, 99, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(100, 100, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(101, 101, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(102, 102, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(103, 103, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(104, 104, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(105, 105, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(106, 106, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(101, 99, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(102, 98, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(103, 97, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(104, 96, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(105, 95, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawLine(106, 94, (int)mx1, (int)my1, GxEPD_BLACK);
          display.drawBitmap( (int)mx1-15, (int)my1-15, mm_hand_mask, 30, 30, GxEPD_WHITE);
          display.drawBitmap( (int)mx1-14, (int)my1-14, mm_hand, 28, 28, GxEPD_BLACK);

          //hour pointer
          //To change Daylight Savings Time, see the settings.h section
          int currentHour= currentTime.Hour;
          double hourAngle = (currentHour * 30) + currentMinute * 0.5;
          double radHour = ((hourAngle + 180) * 71) / 4068.0;
          double hx1 = 100 - (sin(radHour) * 60);
          double hy1 = 100 + (cos(radHour) * 60);
          display.drawLine(92, 108, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(93, 107, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(92, 92, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(93, 93, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(107, 107, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(108, 108, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(107, 93, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(108, 92, (int)hx1, (int)hy1, GxEPD_WHITE);
          display.drawLine(94, 106, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(95, 105, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(96, 104, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(97, 103, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(98, 102, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(99, 101, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(94, 94, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(95, 95, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(96, 96, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(97, 97, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(98, 98, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(99, 99, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(100, 100, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(101, 101, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(102, 102, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(103, 103, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(104, 104, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(105, 105, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(106, 106, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(101, 99, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(102, 98, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(103, 97, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(104, 96, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(105, 95, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawLine(106, 94, (int)hx1, (int)hy1, GxEPD_BLACK);
          display.drawBitmap( (int)hx1-15, (int)hy1-15, mm_hand_mask, 30, 30, GxEPD_WHITE);
          display.drawBitmap( (int)hx1-14, (int)hy1-14, mm_hand, 28, 28, GxEPD_BLACK);
          display.drawBitmap(92, 92, dot2, 16, 16, GxEPD_WHITE);

        }
