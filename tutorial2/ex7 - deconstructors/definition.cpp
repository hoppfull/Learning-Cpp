#include <iostream>

#include "declaration.h"

Ex::Ex(){
    //The constructor runs once when the object is created.
    std::cout << "Hello world! :D\n";
}

Ex::~Ex(){
    //The deconstructor runs once when the object is being destroyd.
    std::cout << "Goodbye world! D:\n";
}

void Ex::myFunction(){
    //Other functions can be called on the whim of the user programmer.
    std::cout << "Jellybeans! :DDDD\n";
}
