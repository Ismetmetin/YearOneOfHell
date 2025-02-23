#include <iostream>

void changeChislo(int chislo)
{
    chislo = 3;
    std::cout << chislo << '\n';
}


void changeArr(int *arr)
{
    arr[0] = 3;

    std::cout << arr[0]<< '\n';
}

int main()
{

    int array[] = {10, 10, 9, 4};

    int chislo = 5;
    std::cout << chislo<< '\n';
    changeChislo(chislo);
    std::cout << chislo<< '\n';

    std::cout << array[0]<< '\n';

    changeArr(array);

    std::cout << array[0] << '\n';
}