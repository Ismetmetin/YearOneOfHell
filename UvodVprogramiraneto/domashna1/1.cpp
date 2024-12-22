#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

bool primeOrNot(int n)
{
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }

    return !(n == 1);

}

void primeAction(int n)
{
    int leftPrime = -1;
    int rightPrime = n;

    for (int i = n - 1; i > 1; i--)
    {
        if (primeOrNot(i))
        {
            leftPrime = i;
            break;
        }
    }

    while (!primeOrNot(++rightPrime))
        ;

    std::cout << "Prime\n";
    if (leftPrime != -1)
    {
        std ::cout << leftPrime << ' ' << rightPrime;
    }
    else
    {
        std::cout << "null " << rightPrime;
    }
}

void notPrimeAction(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    std::cout << "Not Prime\n"
              << sum;
}

int main()
{
    int n;
    std::cin >> n;

    bool isPrime = primeOrNot(n);

    if (isPrime)
    {
        primeAction(n);
    }
    else
    {
        notPrimeAction(n);
    }
}