#include <iostream>
#include <string>

int main()
{
    std::string eingabe = "";
    std::cout << "Bitte einzeiligen Text eingeben (ohne Leerzeichen): ? ";
    std::cin >> eingabe;

    for(int i = 0; i < eingabe.length(); i++)
    {
        std::cout << "Position: " << i << " Buchstabe: " << eingabe.at(i)<< std::endl;
    }
    return 0; 
}