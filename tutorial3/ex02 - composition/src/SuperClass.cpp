#include "SuperClass.h"

SuperClass::SuperClass(int a)
:
    obj(a) //SublClass object obj is created and initialized
{
}

void SuperClass::run()
{
    obj.print(); //print function in SubClass object obj is called
}
