#include <iostream> //import iostream
//using namespace std; is like 'from iostream import std'


void function(){
    int x;

    std::cout << "Enter a number: ";    //This is our print function
    std::cin >> x;                      //This is our input function
    std::cout << "You entered: " << x;
}













//We run this last since all other functions has to be declared first
int main(){ //Everything starts with main
    function();


    return 0;
    /* main has to return an int and 0 implies the
    program ran without any problems or errors */
}
