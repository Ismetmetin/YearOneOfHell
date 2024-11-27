#include <iostream>
#include <cmath>

int main()
{
    double celDeg;
    int m;
    const double epsilon = 0.001;

    std::cin >> celDeg >> m;
    double celToFar = celDeg * 1.80 + 32.00;
    double farDegs[m];

    for (int i = 0; i < m; i++)
    {
        std::cin >> farDegs[i];
    }

    int countGoal = 0;
    int intervalOf5degs = 0;

    for (int i = 0; i < m; i++)
    {
        if (std::abs(farDegs[i] - celToFar) < epsilon)
        {
            ++countGoal;
        }
        else if (std::abs(farDegs[i] - celToFar) < 5.0)
        {
            ++intervalOf5degs;
        }
    }

    std::cout << countGoal << ' ' << intervalOf5degs;
}