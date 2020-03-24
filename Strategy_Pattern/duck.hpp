#ifndef DUCK
#define DUCK
#include <iostream>
#include "QuackBehavior.hpp"
class Duck{
public:
    Duck(){
        quackBehavior = new QuackBehavior();
    }
    void setQuackBehavior(QuackBehavior* qb){
        quackBehavior = qb;
    }
    void display(){
        std::cout << "It's a duck\n";

    }
    void performQuack(){
        quackBehavior->quack();
    }
private:
    //FlyBehavior flyBehavior;
    QuackBehavior* quackBehavior;
};

class MallardDuck : public Duck{
public:
    void display(){
        std::cout << "It's a Mallard Duck\n";
    }
};
#endif
