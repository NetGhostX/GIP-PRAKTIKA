#include <iostream>
#include <string>

int main()
{
       std::string reverse;
       std::string text = "";
       std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
       std::getline(std::cin, text);
              //reverse text
       for(unsigned int j = text.length(); j > 0; j--)
        {
              reverse += text.at(j-1);
        }

       std::cout << "Ergebnis:" << reverse << std::endl;

}