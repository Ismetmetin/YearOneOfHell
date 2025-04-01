
#include <iostream>
#include <string>

class Student
{
    private:

    std::string name;
    int age;
    int* grades;
    std::string quote;

    public:
    Student()
    {
        name = nullptr;
        age = 0;
        grades = nullptr;
        quote = nullptr;
    };

    Student (std::string name, int age, int* grades, std::string quote)
    {
        this-> name = name;
        this->age = age;
        this->grades = grades;
        this->quote = quote;
    }
    
    ~Student()
    {
        delete[] grades;    
    }
    
    std::string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int* getGrades()
    {
        return grades;
    }

    std::string getQuote()
    {
        return quote;
    }

    void setName(std::string name)
    {
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setGrades(int* grades)
    {
        this->grades = grades;
    }

    void setQuote(std::string quote)
    {
        this->quote = quote;
    }
};

int main()
{
}