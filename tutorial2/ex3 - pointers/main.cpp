#include <iostream>

///Pointers

int main()
{
    int x; //We create an integer x and automatically assign it a memory location
    // x is assigned a memory location and the value 5 is stored there
    x = 5; //We assign the integer value of 5 to the memory location of x

    int* x_pointer; //We create a pointer that can hold a memory adress of an integer
    x_pointer = &x; //We assign the memory adress of x to x_pointer
    // if we want to see the value stored at the adress contained in x_pointer, we type *x_pointer.


    std::cout << *x_pointer << std::endl;

    return 0;
}
