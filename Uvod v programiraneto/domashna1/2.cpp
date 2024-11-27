#include <iostream>

int main()
{

    int x, y, n;

    //  std::cout << "Enter trasure coordinate x and y: ";
    std::cin >> x >> y;

    // std::cout << "\nHow many tries? ";
    std::cin >> n;

    int xTemp, yTemp;
    for (int i = 0; i < n; i++)
    {
        // std::cout << "\nGuess the coordinates of the treasure! ";
        std::cin >> xTemp >> yTemp;

        if (yTemp > y)
        {
            std::cout << "South";

            if (xTemp > x)
            {
                std::cout << "west\n";
            }
            else if (xTemp < x)
            {
                std::cout << "east\n";
            }
        }
        else if (yTemp < y)
        {
            std::cout << "North";

            if (xTemp > x)
            {
                std::cout << "west\n";
            }
            else if (xTemp < x)
            {
                std::cout << "east\n";
            }
        }
        else
        {
            if (xTemp > x)
            {
                std::cout << "West\n";
            }
            else if (xTemp < x)
            {
                std::cout << "East\n";
            }
            else
            {
                std::cout << "Treasure Found";
                return 0;
            }
        }
    }

    return 0;
}