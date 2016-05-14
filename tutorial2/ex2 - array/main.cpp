#include <iostream>

int main()
{
    int X[2][3] =
    {
        { 1,  2,  3},
        {20, 40, 55}
    };

    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            std::cout << X[row][col] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
