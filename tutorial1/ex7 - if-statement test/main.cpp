#include <iostream>

bool test()
{
    std::cout << "testing!" << std::endl;
    return true;
}

int main()
{
    if(test() and false)
    {
        std::cout << "hello!";
    }

    if(false and test())
    {
        std::cout << "hello!";
    }

    return 0;
}

/** Running this application shows that in an if-statement;
if first condition returns false, program skips the subsequent
condition testing. Very good for optimization! */
