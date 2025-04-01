#include <iostream>
#include <fstream>

int main ()
{

    /*
        std::ios::in – отваря файла за четене.
        std::ios::out – отваря файла за запис.
        std::ios::binary – отваря файла в двоичен режим.
        std::ios::app – отваря файла в режим на добавяне (append), т.е. записът се извършва в края на файла.
        std::ios::ate – отваря файла и поставя курсора в края, но позволява запис и четене.
        std::ios::trunc – ако файлът съществува, неговото съдържание се изтрива при отваряне за запис.
        ifstream i ofstream dobavqt doplnitelnite flagove dokato fstream overwriteva flagovete po podrazbirane
    */
    std::ofstream outputFile("otherText.txt", std::ios::app);
    
    std::ifstream inFile("someText.txt");

    if(!inFile || !outputFile)
    {
        std::cerr << "File not found" << std::endl;
        return 1;
    }

    std::string line;
    while(std::getline(inFile, line))
    {
        outputFile << line << std::endl;
    }

    inFile.close();
    outputFile.close();

    return 0;
}