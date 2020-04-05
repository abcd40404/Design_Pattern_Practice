#pragma once
#include <set>
#include "Observer.hpp"

class WeatherData : public Subject{
public:
    void registerObserver(Observer* o){
        m_observers.insert(o);
    }
    
    void removeObserver(Observer* o){
        m_observers.erase(o);
    }

    void notifyObserver(){
        for(auto o : m_observers){
            o->update(m_temperature, m_humidity, m_pressure);    
        }
    }

    void measurementsChanged(){
        notifyObserver();
    }

    void setMeasurements(float temp, float humidity, float pressure){
        m_temperature = temp;
        m_humidity = humidity;
        m_pressure = pressure;
        measurementsChanged();
    }
private:
    float m_temperature;
    float m_humidity;
    float m_pressure;
    std::set<Observer*> m_observers;
};
