#include <iostream>

int main()
{
    int number = -1555555;

    std::cout << &number << ' ' << number;

    char *comparer = (char *)&number;

    std::cout << '\n'
              << &comparer << ' ' << *comparer;
    std::cout << '\n'
              << &comparer << ' ' << *(comparer + 1);
    std::cout << '\n' << &comparer << ' ' << *(comparer+2);
    std::cout << '\n' << &comparer << ' ' << *(comparer + 3);
}