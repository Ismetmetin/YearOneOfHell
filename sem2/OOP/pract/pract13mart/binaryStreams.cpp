#include <iostream>
#include <fstream>

int main()
{

    
    int arr [] = {1, 2, 3, 4, 5};
    std::ofstream outFile;

    outFile.open("binaryArr.bin", std::ios::binary);
    
    if(!outFile.is_open())
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    for(int i = 0; i < 5; i++)
    {
        outFile.write((char*)&arr[i], sizeof(int)); 
    }


    outFile.write(reinterpret_cast<char*>(arr), sizeof(arr));
    outFile.close();

    std::ifstream inFile;
    inFile.open("binaryArr.bin", std::ios::binary);

    if(!inFile.is_open())
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    inFile.read(reinterpret_cast<char*>(arr), sizeof(arr));
    inFile.close();

    for (int i = 0; i < 5; ++i) {
        std::cout << "Number " << i + 1 << ": " << arr[i] << std::endl;
    }
    return 0;
}


int zad2()
{
    std::ofstream outFile;
    std::ifstream inFile;

    outFile.open("output.txt");

    if(!outFile.is_open())
    {
        std::cerr << "Error" <<std::endl;
        return 1;
    }

    outFile << "Hello, World!\nThis is a test." << std::endl;

    outFile.close();
    inFile.open("output.txt");
    std::string line;

    if(!inFile.is_open())
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    while(std::getline(inFile, line))
    {
        std::cout << line << std::endl;
    }

    

    return 0;
}
