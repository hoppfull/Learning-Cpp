#include <iostream> //import iostream
#include <string> //We need this to use strings...


class Main{ //No need to declare in order inside a class
private: //Access specifier
/* We only declare our variables here, but don't initiate them.
We use the constructor for that */
    std::string name;

public: //Access specifier
/* We never declare variables here. That's considered bad
coding practice since it could allow users to mess up our
program. However we can write functions that access variables
for users */
    void setName(std::string set_name){
        name = set_name;
    }
    void run(){
        std::cout << name;
    }


};





int main(){ //We declare this last
    Main application;
    application.setName("penis!!");
    application.run();


    return 0;
}
