#pragma once
#include <string>

class Beverage{
public:
    virtual std::string getDescription()=0;
    virtual double getCost()=0;
};

class Espresso : public Beverage{
public:
    std::string getDescription() override{
        return "Espresso";
    }    
    double getCost() override{
        return 1.99;
    }
};

class HouseBlend : public Beverage{
public:
    std::string getDescription() override{
        return "House Blned Coffee";
    }    
    double getCost() override{
        return 0.89;
    }
};
