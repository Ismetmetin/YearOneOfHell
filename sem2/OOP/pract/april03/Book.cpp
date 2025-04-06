#include <iostream>

typedef std::string str;

struct Book
{
    str title;
    str author;
    int year;
};

int main()
{
    Book kniga;
    str foo;
    
    // kniga.author = "ismet";
    // kniga.title = "Knigata";
    // kniga.year = 1990;

    std::getline(std::cin, foo);
    kniga.author = foo;

    std::getline(std::cin, foo);
    kniga.title = foo;

    int god = 0;
    std::cin >> god;
    kniga.year = god;

    std::cout <<'\n' << kniga.author << '\n' << kniga.title << '\n' << kniga.year;
}