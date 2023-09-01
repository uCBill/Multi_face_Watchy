/* Arduino IDE Tool Settings:
Board: "ESP32 Dev Module"
Upload Speed: "921600"
CPU Frequency: "240MHz (WiFi/BT)"
Flash Frequency: "80MHz"
Flash Size: "4MB (32Mb)"
Partition Scheme: "HUGE APP (3MB No OTA/1MB Spiffs)"
Core Debug Level: "None"
PSRAM: "Diabled"
Arduino Runs On: "Core 1"
Events Runs On: "Core 1"
Port: "/dev/ttyUSB0"
 */

#ifndef SETTINGS_H
#define SETTINGS_H

//Weather Settings
//NOAA Website for The Villages=https://forecast.weather.gov/MapClick.php?lat=28.9173&lon=-82.009#.Ygu84lROmR0
#define CITY_ID "4173007" //Silver Springs Shores, FL https://openweathermap.org/current#cityid
#define OPENWEATHERMAP_APIKEY "f058fe1cad2afe8e2ddc5d063a64cecb" //use your own API key :)
#define OPENWEATHERMAP_URL "http://api.openweathermap.org/data/2.5/weather?id=" //open weather api
#define TEMP_UNIT "metric" //metric = Celsius , imperial = Fahrenheit
#define TEMP_LANG "en"
#define WEATHER_UPDATE_INTERVAL 99 //must be greater than 5, measured in minutes
//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 * -4 //New York is UTC -5, Daylight Savings is -4
#define DST_OFFSET_SEC 3600

watchySettings settings{
    CITY_ID,
    OPENWEATHERMAP_APIKEY,
    OPENWEATHERMAP_URL,
    TEMP_UNIT,
    TEMP_LANG,
    WEATHER_UPDATE_INTERVAL,
    NTP_SERVER,
    GMT_OFFSET_SEC,
    DST_OFFSET_SEC
    
};

#endif
