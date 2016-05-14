#include "SubClass.h"
#include <iostream>

SubClass::SubClass(int a)
:
    x(a)
{
}

void SubClass::print()
{
    std::cout << x << std::endl;
}
