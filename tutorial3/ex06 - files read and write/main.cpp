#include <iostream>
#include <fstream>

void write()
{
    std::ofstream res_ofile("./res/resource.txt"); //If file doesn't exist, it'll be created

    if(res_ofile.is_open())
    {
        res_ofile << 10 <<' '<< "tjena" <<' '<< 25.5 << std::endl;
        res_ofile << 15 <<' '<< "hejsan" <<' '<< 1.6 << std::endl;
        res_ofile << 43 <<' '<< "hej" <<' '<< 45.337 << std::endl;
    }
    res_ofile.close(); //Good programming practice
}

void read()
{
    int r;
    std::string s;
    double t;

    std::ifstream res_ifile("./res/resource.txt");

    if(res_ifile.is_open())
    {
        while(res_ifile >> r >> s >> t)
        {
            std::cout << r*2 << ', ' << s << ', ' << t*2 << std::endl;
        }
    }
    //ifstream object automatically closes when the entire file has been read
}




int main()
{
    write();
    read();

    return 0;
}
