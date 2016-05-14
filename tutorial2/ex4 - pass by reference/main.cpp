#include <iostream>

///Pass by reference

void assign_byReference(int* a){
    *a = 10;
    /* This is a copy of the adress but manipulate
    the value stored at that adress and we manipulate
    the variable related to that adress. */
}

void assign_byValue(int a){
    a = 10; //This is just a copy of the variable passed to this function.
}



int main(){

    int x = 5;
    int y = 5;

    assign_byReference(&x);
    assign_byValue(y);

    std::cout << x << std::endl; //value stored at x's adress has been changed to 10
    std::cout << y << std::endl; //value stored at y's adress remains unchanged



    return 0;
}

/* Apparently, when a function is passed a variable, it copies that variable
and does stuff with its copy. However, if we pass by reference, we pass a
pointer so we can manipulate the value stored at the memory adress. */

//This is all very fascinating!
