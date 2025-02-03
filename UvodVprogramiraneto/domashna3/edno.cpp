#include <iostream>
#include <string.h>

// “  \t abc       def\t\t\tgh\r\t”;
char *normalizeWhitespace(char *str)
{
    if (str == nullptr || str == "")
        return str;

    char *reader = str;
    char *writer = str;
    bool spaceWritten = true;

    while (*reader != '\0')
    {
        int currCharAscii = (int)(*reader++);

        switch (currCharAscii)
        {
        case (int)('\n'):
        case (int)('\r'):
        case (int)('\t'):
        case (int)(' '):
            if (!spaceWritten)
            {
                *writer++ = ' ';
                spaceWritten = true;
                continue;
            }
            else
            {
                continue;
            }
        default:
            *writer++ = (char)(currCharAscii);
            spaceWritten = false;
            break;
        }
    }

    // do tuk ^ sum mahnal vsichkite whitespaceove no na kraq na stringa vse oshte ima 1 space ako stringa zavurshva sus whitespace.
    if (*(writer - 1) = ' ')
    {
        *(writer - 1) = '\0';
    }
    else
    {
        *writer = '\0';
    }

    return str;
}

int toInt(char *str)
{
    if (str == nullptr || str == "")
        return 0;
    // 0-9 char to int 48-57

    int result = 0;
    bool isNegative = *str == '-';

    if (isNegative)
        ++str;

    while (*str != '\0')
    {
        int convertToDigit = (int)(*str++) - 48;
        result = result * 10 + convertToDigit;
    }

    return isNegative ? -result : result;
}

int main()
{ // inputa shte go mislq posle
    char str1[100];
    std::cin.getline(str1, 100);
    std::cout << normalizeWhitespace(str1) << "\n";

    char str [] ="  \t abc       def\t\t\tgh\r\t";
    std::cout << normalizeWhitespace(str) << "\n";
    std::cout << strcmp(str1, "abc def gh") << "\n"; // извежда нула
    
    // zad2
    char str2[100];
    std::cin.getline(str2, 100);

    std::cout << toInt(str2) << '\n';
}
