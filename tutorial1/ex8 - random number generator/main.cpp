#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    ///Random number generator;

    srand(time(0)); //Enter a seed number here, we use system clock to give appearance of randomness

    for(int i=0;i<25;i++)
    {
        std::cout << rand()%10 << std::endl; //Note the use of modulus!
    }
    return 0;
}

/* Using the modulus in this way is ingenious becouse
it limits the random numbers to be somewhere between
0 and the % value you chose. Amazing! */
