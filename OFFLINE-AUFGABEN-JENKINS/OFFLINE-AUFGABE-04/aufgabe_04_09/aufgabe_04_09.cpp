#include <iostream>
#include <string>

int main()
{
       std::string text = "";
       char search;
       std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
       std::getline(std::cin, text);
       std::cout << "Bitte Buchstaben eingeben: ? ";
       std::cin >> search;

       std::string::size_type pos = text.find(search);
       if (pos != std::string::npos)
       {
              std::cout << "Der Buchstabe " << search << " kommt an der Stelle " << pos << " vor." << std::endl;
       }
       else
       {
              std::cout << "Der Buchstabe " << search << " kommt nicht vor." << std::endl;
       }
}