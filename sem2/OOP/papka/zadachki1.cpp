#include <iostream>
#include <chrono>

//#define DEBUG

inline int calculateArea(int width, int height)
{   
#ifdef DEBUG
    std::cout << "Function called with width = " << width << std::endl;
    std::cout << "Funciton called with height = " << height << std::endl;
#endif


    return width * height;
}

//2zad

void print(int num)
{
    std::cout << num;
}

void print(char num)
{
    std::cout << num;
}

//zad3

using namespace std::chrono;

#define SQUARE(x) x*x

inline int squareInline(int x)
{
    return x*x;
}

int squareNotInline(int x)
{
    return x*x;
}


int main()
{
    //zad1
    //std::cout << calculateArea(15,20);

    //zad2
    // print(15);
    // print('a');
    int sum = 0;
    auto start1 = high_resolution_clock::now();
    for(int i= 0;  i< 10'000'000; i++)
    {
        ++sum;
        SQUARE(i);
    }
    auto end1 = high_resolution_clock::now();


    for(int i= 0;  i< 10'000'000; i++)
    {
        ++sum;
        squareInline(i);
    }

    for(int i= 0;  i< 10'000'000; i++)
    {
        ++sum;
        squareNotInline(i);
    }
}