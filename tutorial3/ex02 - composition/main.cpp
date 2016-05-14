#include <iostream>
#include "SuperClass.h"

///Composition
/*
 SuperClass contains a SubClass object. Classes in classes. Great!
*/

int main()
{
    SuperClass o(1243);
    o.run();
    return 0;
}
