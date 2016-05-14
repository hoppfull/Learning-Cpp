#include <iostream> //import iostream
//using namespace std; This is like 'from iostream import std'


void function(){
    std::cout << "penis";
}













//We run this last since all other functions has to be declared first
int main(){ //main is the function being executed. Everything starts here
    std::cout << "Hello world!" << std::endl;
    function();
    return 0; //Looks like we have to return an int with our main function.
}
