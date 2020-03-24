#include <iostream>

#include "duck.hpp"

using namespace std;

int main(){
    MallardDuck m_duck;
    m_duck.performQuack();
    m_duck.setQuackBehavior(new Quack_A());
    m_duck.performQuack();
    m_duck.setQuackBehavior(new Quack_B());
    m_duck.performQuack();

    return 0;
}
