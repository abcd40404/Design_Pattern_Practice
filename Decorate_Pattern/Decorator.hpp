#pragma once
#include "Beverage.hpp"

class CondimentDecorator : public Beverage{

};

class Mocha : public CondimentDecorator{
public:
    Beverage* beverage;

    Mocha(Beverage* beverage){
        this->beverage = beverage;
    }

    std::string getDescription() override{
        return beverage->getDescription() + ", Mocha";
    }

    double getCost() override{
        return beverage->getCost() + 0.2;    
    }
};

class Whip : public CondimentDecorator{
public:
    Beverage* beverage;

    Whip(Beverage* beverage){
        this->beverage = beverage;
    }

    std::string getDescription() override{
        return beverage->getDescription() + ", Whip";
    }

    double getCost() override{
        return beverage->getCost() + 0.1;    
    }
};
