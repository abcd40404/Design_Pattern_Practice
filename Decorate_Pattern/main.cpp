#include <iostream>
#include "Beverage.hpp"
#include "Decorator.hpp"


using namespace std;

int main(){
    Beverage *beverage = new Espresso();
    beverage = new Mocha(beverage);
    beverage = new Mocha(beverage);
    beverage = new Whip(beverage);
    cout << "Cost: " << beverage->getCost() << endl;
    cout << "Introduction: " << beverage->getDescription() << endl;
    
    return 0;
}
