#include "SuperClass.h"
#include <iostream>

SuperClass::SuperClass(int u, int v)
:
    x(u),
    y(v)
{
}

void SuperClass::run()
{
    std::cout << x + y;
}
