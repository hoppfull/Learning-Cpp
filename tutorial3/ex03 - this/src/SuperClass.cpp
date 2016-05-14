#include "SuperClass.h"
#include <iostream>

SuperClass::SuperClass(int a)
:
    var(a)
{
}

void SuperClass::run()
{
    std::cout << "var= " << var << std::endl;
    std::cout << "var= " << this->var << std::endl;
    /* The arrow member selection operator calles a
    variable or function by using the memory adress
    of an object. The this-keyword seems to return
    the memory adress of this class object.
    */
    std::cout << "var= " << (*this).var << std::endl;
    /* Point to the object at the adress inside the
    parentheses and use the parentheses as if it were
    the object itself. Amazing!
    */
    std::cout << "this= " << this << std::endl;
}
