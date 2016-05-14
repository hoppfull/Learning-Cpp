#include <iostream>
#include "SuperClass.h"

///this-keyword (different from java!)
// "this" returns the adress from within the class it resides

int main()
{
    SuperClass obj(56);
    obj.run();
    std::cout << "obj adress= " << &obj << std::endl;

    return 0;
}
