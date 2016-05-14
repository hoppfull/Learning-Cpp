#include <iostream>

///Virtual function

class Car
{
public:
    void virtual engineSound();
    /*
        A virtual function knows to look to its definition in subclasses when called.
    */
};

class Volvo: public Car
{
public:
    void engineSound()
    {
        std::cout << "Brum." << std::endl;
    }
};

class Volkswagen: public Car
{
public:
    void engineSound()
    {
        std::cout << "Brummen der geschlaffersch." << std::endl;
    }
};

class Ford: public Car
{
public:
    void engineSound()
    {
        std::cout << "wwroom." << std::endl;
    }
};



int main()
{
    Volvo volvo;
    Volkswagen volkswagen;
    Ford ford;

    Volvo*          car1 = &volvo;
    Volkswagen*     car2 = &volkswagen;
    Car*            car3 = &ford;

    car1->engineSound();
    (*car2).engineSound();
    (*car3).engineSound();

    return 0;
}
