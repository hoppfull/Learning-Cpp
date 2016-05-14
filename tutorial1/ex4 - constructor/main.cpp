#include <iostream> //import iostream
#include <string> //We need this to use strings...


class Main{ //No need to declare in order inside a class
public: //Access specifier
    Main(std::string set_name){ //This is the constructor!
        name = set_name;
    }



    void run(){
        std::cout << name;
    }

private: //Access specifier
    std::string name;



};





int main(){ //We declare this last
    Main application("hello!");
    application.run();


    return 0;
}
