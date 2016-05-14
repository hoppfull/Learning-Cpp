#ifndef SUPERCLASS_H
#define SUPERCLASS_H

#include "SubClass.h"

class SuperClass
{
public:
    SuperClass(int a);
    void run();
private:
    SubClass obj; //SubClass object obj is declared but not created
};

#endif // SUPERCLASS_H
