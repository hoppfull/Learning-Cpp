#include <iostream>

#include "declaration.h"

///Arrow member selection operator

int main(){
    Experiment object;

    Experiment* _object = &object;

    //Access function with object:
    object.myFunction();

    //Access function with object pointer:
    _object->myFunction();

    //Access function with object memory adress: (actually same as previous)
    (&object)->myFunction();

    return 0;
}

/* We will come back to this later to clear out why this is useful. */
