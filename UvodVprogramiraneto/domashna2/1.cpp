//
// Домашно 2 по "Увод в програмирането"
//
// Име: Исмет Метин Исмет
// ФН: 0MI0800640
// Специалност: Компютърни науки
// Курс:1
// Административна група: 7?
//

#include <iostream>


bool isLittleEndian()
{
    unsigned int c = 67;

    char *firstBytePtr = (char *) &c;

    return (*firstBytePtr == c);
}

bool isBigEndian()
{
    return !isLittleEndian();
}

int fastPow(int base, unsigned int power)
{
    int res = 1;

    while (power > 0)
    {
        if (power % 2 == 1)
            res *= base;

        base *= base;
        power /= 2;
    }

    return res;
}

void commonDigits(int a, int b)
{
    const int SIZE = 10;

    a = a < 0 ? a * -1 : a;
    b = b < 0 ? b * -1 : b;

    bool *firstNumber = new bool[SIZE];
    bool *secondNumber = new bool[SIZE];

    // занулява масивите с които ще търся общи числа
    for (int i = 0; i < SIZE; i++)
    {
        firstNumber[i] = secondNumber[i] = false;
    }

    // намира цифри
    do
    {
        int digitOfFirst = a % 10;

        firstNumber[digitOfFirst] = true;

        a /= 10;
    } while (a != 0);

    do
    {
        int digitOfSecond = b % 10;

        secondNumber[digitOfSecond] = true;

        b /= 10;
    } while (b != 0);

    // принтира общите цифри
    int printedCounter = -1;
    for (int i = 0; i < SIZE; i++)
    {
        if (firstNumber[i] && secondNumber[i])
        {
            std::cout << i;
            ++printedCounter;
        }
    }

    if (printedCounter == -1)
        std::cout << "none";

    delete[] firstNumber;
    delete[] secondNumber;
}

bool isSorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }

    return true;
}

bool binarySearch(int element, int *arr, size_t size)
{
    int lowerBound = 0;
    int upperBound = size - 1;

    while (lowerBound <= upperBound)
    {
        int compareIndex = (lowerBound + upperBound) / 2;

        if (arr[compareIndex] > element)
        {
            upperBound = compareIndex - 1;
        }
        else if (arr[compareIndex] < element)
        {
            lowerBound = compareIndex + 1;
        }
        else if (arr[compareIndex] == element)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

//---------------------------------------------------------------------
// Моля, не променяйте кода от тук до края на файла (под чертата)

void printCommonDigits(int a, int b)
{
    std::cout << "\n  The common digit(s) of " << a << " and " << b << " are: ";
    commonDigits(a, b);
}

int main(int argc, char *argv[])
{
    std::cout << "\n\n# Task 1";
    std::cout << "\n  isBigEndian() returns " << isBigEndian();
    std::cout << "\n  isLittleEndian() returns " << isLittleEndian();

    std::cout << "\n\n# Task 2";
    for (int i = 0; i < 15; ++i)
    {
        std::cout << "\n  3^" << i << " = " << fastPow(3, i);
    }

    std::cout << "\n\n# Task 3";
    printCommonDigits(1221253, 7542111);
    printCommonDigits(1221253, -7542111);
    printCommonDigits(12340, 90);
    printCommonDigits(101, 0);
    printCommonDigits(123, 456);
    printCommonDigits(123, 0);
    printCommonDigits(-5, -5);
    printCommonDigits(5, 5);
    printCommonDigits(0, 0);

    std::cout << "\n\n# Task 4";
    int arr1[] = {1, 2, 3, 4, 5};
    std::cout << "\n  isSorted(arr1) returns " << isSorted(arr1, 5);
    int arr2[] = {5, 4, 3, 2, 1};
    std::cout << "\n  isSorted(arr2) returns " << isSorted(arr2, 5);
    int arr3[] = {1, 1, 1, 1, 1};
    std::cout << "\n  isSorted(arr3) returns " << isSorted(arr3, 5);
    int arr4[] = {0, 1, 0, 1, 1};
    std::cout << "\n  isSorted(arr4) returns " << isSorted(arr4, 5);

    std::cout << "\n\n# Task 5";
    const size_t size = 9;
    int haystack[] = {-90, -3, 0, 1, 5, 10, 10, 1'000, 3'000};

    for (size_t i = 0; i < size; ++i)
    {
        std::cout
            << "\n  Binary search lookup for " << haystack[i] << " returns "
            << binarySearch(haystack[i], haystack, size);
    }

    std::cout << "\n  Binary search lookup for -91 returns " << binarySearch(-91, haystack, size);
    std::cout << "\n  Binary search lookup for 2 returns " << binarySearch(2, haystack, size);
    std::cout << "\n  Binary search lookup for 3000 returns " << binarySearch(3000, haystack, size);

    std::cout << "\nDone.\n\n";
}