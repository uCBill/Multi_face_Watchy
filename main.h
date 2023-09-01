#ifndef MAIN_H
#define MAIN_H

#include <Watchy.h>
#include "analog_vis.h"
#include "mickey_vis.h"
#include "bahn_vis.h"
#include "maze_vis.h"
#include "redub_vis.h"
#include "novel_vis.h"
#include "slacker_vis.h"
#include "train_vis.h"

RTC_DATA_ATTR bool light = true;
RTC_DATA_ATTR int face = 0;


class WatchyBrain : public Watchy {
  using Watchy::Watchy;
  public:
    void drawWatchFace();
    void drawWrapText(String text);
    void drawClockface(bool light, float batt);
    void drawMickey(bool light, float batt);
    void drawBahn(bool light, float batt);
    void drawMaze(bool light, float batt);
    void drawRedub(bool light, float batt);
    void drawPoeFace(bool light, float batt);
    void drawAustenFace(bool light, float batt);
    void drawSlacker(bool light, float batt);
    void drawTrain(bool light, float batt);
    virtual void handleButtonPress();//Must be virtual in Watchy.h too
};

#include "analog.h"
#include "mickey.h"
#include "bahn.h"
#include "maze.h"
#include "redub.h"
#include "novel.h"
#include "slacker.h"
#include "train.h"

void WatchyBrain::handleButtonPress() {
  if (guiState == WATCHFACE_STATE) {
    //Up and Down switch watch faces
    uint64_t wakeupBit = esp_sleep_get_ext1_wakeup_status();
    if (wakeupBit & UP_BTN_MASK) {
      face--;
      if (face < 0 ) { face = 8; }
      RTC.read(currentTime);
      showWatchFace(true);
      return;
    }
    if (wakeupBit & DOWN_BTN_MASK) {
      face++;
      if (face > 8 ) { face = 0; }
      RTC.read(currentTime);
      showWatchFace(true);
      return;
    }
    if (wakeupBit & BACK_BTN_MASK) {
      light = !light;
      RTC.read(currentTime);
      showWatchFace(true);
      return;
    } 
    if (wakeupBit & MENU_BTN_MASK) {
      Watchy::handleButtonPress();
      return;
    }
  } else {Watchy::handleButtonPress();}
  return;
}


void WatchyBrain::drawWatchFace() {
  // ** UPDATE **
  //resets step counter at midnight everyday
  if (currentTime.Hour == 00 && currentTime.Minute == 00) {
    sensor.resetStepCounter();
  }

  // ** GET BATTERY **
  float batt = (getBatteryVoltage()-3.3);
  if (batt > 1) { batt = 1; } else if (batt < 0) { batt = 0; }
  
  // ** DRAW WATCHFACE **
  if (face == 0) {
    drawClockface(light, batt);
  }
  if (face == 1) {
    drawMickey(light, batt);
  }
  if (face == 2) {
    drawBahn(light, batt);  
  }
  if (face == 3) {
    drawMaze(light, batt);
  }
  if (face == 4) {
    drawRedub(light, batt);
  }
  if (face == 5) {
    drawPoeFace(light, batt);
  }
  if (face == 6) {
    drawAustenFace(light, batt);
  }
  if (face == 7) {
    drawSlacker(light, batt);
  }
  if (face == 8) {
    drawTrain(light, batt);
  }
}

#endif
