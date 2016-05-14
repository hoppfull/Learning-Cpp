#include "SuperExample.h"
#include <iostream>

void SuperExample::setX(int a)
{
    x = a;
}

void SuperExample::run()
{
    std::cout << x << std::endl;
}
