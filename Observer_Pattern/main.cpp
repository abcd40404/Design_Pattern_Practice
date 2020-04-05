#include <iostream>
#include <memory>
#include "WeatherData.hpp"
#include "Display.hpp"

using namespace std;

int main(){
    WeatherData* weatherData = new WeatherData();
    CurrentConditionsDisplay currentDisplay(weatherData);
    StatisticsDisplay statisticsDisplay(weatherData);
    ForecastDisplay forecastDisplay(weatherData);
    weatherData->setMeasurements(80, 65, 30.4f);
    weatherData->setMeasurements(82, 70, 29.2f);
    weatherData->setMeasurements(78, 90, 29.2f);
    return 0;
}

