#include <iostream>
#include <fstream>
using namespace std;

void zad1()
{
    int n;
    std::cin >> n;

    std::cout << 2 * n << std::endl;
}

void zad2()
{
    string line;
    std::ifstream input;
    input.open("output.txt");

    if (input.is_open())
    {
        while (getline(input, line))
        {
            std::cout << line << std::endl;
        }

        input.close();
    }
    else
    {
        std::cout << "Error opening file" << std::endl;
    }
}

int main()
{
    zad2();
    return 0;   
}