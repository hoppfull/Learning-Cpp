#include <iostream>

///Function overloading

void myFunction(float x)
{
    std::cout << "float: " << x << std::endl;
}

void myFunction(int x)
{
    std::cout << "int: " << x << std::endl;
}

int main()
{
    int a = 5;
    float b = 5.6;

    myFunction(a);
    myFunction(b);
    return 0;
}
