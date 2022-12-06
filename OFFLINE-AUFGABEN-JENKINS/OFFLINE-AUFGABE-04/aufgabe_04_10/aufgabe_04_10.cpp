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
       int count;
       for (int i = 0; i < text.length(); i++)
       {
              if (text[i] == search)
              {
                     count++;
              }
       }
       std::cout << "Der Buchstabe " << search << " kommt " << count << " mal vor." << std::endl;
       
}