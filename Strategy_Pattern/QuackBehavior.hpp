#ifndef QUACK_BEHAVIOR
#define QUACK_BEHAVIOR
#include <iostream>
class QuackBehavior{
public: 
    virtual void quack(){
        std::cout << "Quack!\n";
    }
};
class Quack_A : public QuackBehavior{
public: 
    void quack(){
        std::cout << "AAAAA\n";
    }        
};
class Quack_B : public QuackBehavior{
public: 
    void quack(){
        std::cout << "BBBBB\n";
    }        
};
#endif
