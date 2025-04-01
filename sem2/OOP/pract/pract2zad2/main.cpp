#include <iostream>
#include "arrFuncs.h"
#include "arrfunc.cpp"

int main() 
{
    double arr[] = {1, 2, 3, 11, 9, 10, 7, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Sum of array: " << arrSum(arr, n) << std::endl;
    std::cout << "Average of array: " << arrAvg(arr, n) << std::endl;
    std::cout << "Median of array: " << medianArr(arr, n) << std::endl;

    return 0;

}