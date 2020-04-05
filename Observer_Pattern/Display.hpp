#pragma once
#include <iostream>
#include <cmath>
class CurrentConditionsDisplay : public Observer{
public:
    CurrentConditionsDisplay(Subject* weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }

    void update(float temp, float humidity, float pressure){
        m_temperature = temp;
        m_humidity = humidity;
        display();
    }

    void display(){
        std::cout << "Current conditions: " << m_temperature << "F degrees and " << m_humidity << "% humidity\n";
    }
private:
    float m_temperature;
    float m_humidity;
    Subject* weatherData;
};

class StatisticsDisplay : public Observer{
public:
    StatisticsDisplay(Subject* weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }

    void update(float temp, float humidity, float pressure){
        m_tempSum += temp;
        m_numData++;
        m_maxTemp = std::max(m_maxTemp, temp);
        m_minTemp = std::min(m_minTemp, temp);
        display();
    }

    void display(){
        std::cout << "Avg/Max/Min temperature = " << (m_tempSum / m_numData) << "/" << m_maxTemp << "/" << m_minTemp << std::endl;
    }
private:
    float m_maxTemp = 0;
    float m_minTemp = 200;
    float m_tempSum = 0;
    int m_numData = 0;
    Subject* weatherData;
};

class ForecastDisplay : public Observer{
public:
    ForecastDisplay(Subject* weatherData){
        this->weatherData = weatherData;
        weatherData->registerObserver(this);
    }

    void update(float temp, float humidity, float pressure){
        m_lastPressure = m_currentPressure;
        m_currentPressure = pressure;
        display();
    }

    void display(){
        if(m_currentPressure > m_lastPressure){
            std::cout << "Improving weather on the way!\n";
        }
        else if(m_currentPressure == m_lastPressure){
            std::cout << "More of the same\n";
        }
        else if(m_currentPressure < m_lastPressure){
            std::cout << "Watch out for cooler, rainy weather\n";
        }
    }
private:
    float m_currentPressure = 29.92f;
    float m_lastPressure;
    Subject* weatherData;
};
