#pragma once

class Observer{
public:
    virtual void update(float temp, float humidity, float pressure)=0;
};

class Subject{
public:
    virtual void registerObserver(Observer* o)=0;
    virtual void removeObserver(Observer* o)=0;
    virtual void notifyObserver()=0;
};

