#include <iostream>

///Recursion

int factorial(int x)
{
    if(x==1)
    {
        return 1;
    }else{
        return x * factorial( x - 1); //Notice we pass the function to itself
    }
}

int main()
{
    std::cout << factorial(5);
    return 0;
}

/* Recursion seems a little dangerous becouse it can run away
and run forever. You need to build something called a "base case",
an end point that can answer a question that if the function can
solve that question then all the other questions get answered.*/
