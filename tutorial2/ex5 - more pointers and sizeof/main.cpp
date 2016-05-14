#include <iostream>

///More pointers and sizeof

int main(){
    int X[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; //An array with 10 elements

    //Get number of elements in X:
    std::cout << "X contains " << sizeof(X) / sizeof(X[0]) << " elements.\n";

    //Cycle through X using pointers:
     std::cout << "These elements are: ";

    int* _X0 = &X[0];                           //Pointer to X[0]
    int n_X = sizeof( X ) / sizeof( X[0] );     //Aquire # elements in X
    for(int i=0;i<n_X;i++){                     //for-loop to cycle through elements in X
        std::cout << *( _X0 + i ) << " ";              //Print the value stored at adress location
        /* This is interesting. We add one to the pointer, which makes it add one int worth
        of size to make it perfectly point to the value next to it. Amazing */
    }




    return 0;
}
