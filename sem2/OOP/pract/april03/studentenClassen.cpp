#include <iostream>

class Student
{
    private:
    std::string name;
    int age;
    double grade;

    public:

    Student(std::string name, int age, double grade)
    {
        this->name = name;
        this->grade = grade;
        this->age = age;
    }

    void displayInfo()
    {
        std::cout << name << std::endl;
        std::cout << grade << std::endl;
        std::cout << age << std::endl;
    }

    void updateGrade(double newGrade)
    {
        this->grade = newGrade;
    }
    
};

int main()
{
    Student student1("Pesho", 19, 5.5);

    student1.displayInfo();

    student1.updateGrade(4);

    student1.displayInfo();

}