#include <iostream>

int main()
{
    std::string eingabe = "";
    std::string reversed = "";
    std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    std::getline(std::cin , eingabe);
    for(int i = 0; i < eingabe.length();i++)
    {
        reversed +=  eingabe[eingabe.length()-i-1];
    }
    std::cout << reversed << std::endl;
}