//TODO: write a program that reads the file personendaten.txt and prints the data to the console
#include <iostream>
#include <fstream> 
#include <string>

int main()
{
    std::string data = "";
    std::ifstream file("personendaten.txt");
    std::string line;
    while (std::getline(file, line))
    {
        data += line ;
    }
    std::cout << data << std::endl;
    return	0; 
}
