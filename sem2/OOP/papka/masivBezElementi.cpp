#include <iostream> 

int main()
{
    int arr [] = {};
    int n = sizeof(arr) / sizeof(arr[0]);\

    int arr2[0] = {};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int *arrPtr = new int [0];
    int n3 = sizeof(arrPtr)[0]/ sizeof(arrPtr[0]);
    int * asd= nullptr;
    std::cout << "n - " << n << " n2 - " << n2 << " n3 - "  << n3 << std::endl;
    std::cout << &arr[0] << " " << &arr2[0] << " " << &arrPtr[0] << arrPtr << ' ' << asd <<std::endl;
    std::cout << arr[0] << " " << arr2[0] << " " << *arrPtr << ' ' << asd <<std::endl;

    
    return 0;
}