#include <iostream>

struct Student
{ 
    public:

    void f1();
    
};

    //constructor destructor(niches kakvo stava ako ima pointer) operator '='
    //copying ctor
    //PROCHETI RULE OF 3

class Worker
{
    private:
    void f2();
};

//ato functions
//itoa

//nothrow
int main()
{
    Student s;
    s.f1();
    Worker w;
    w.f2(); // Error: 'void Worker::f2()' is private within this context



    return 0;
}