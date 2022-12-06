#include <iostream>
#include <string>

int main()
{
       std::string text = "";
       char toBeReplaced;
       char replacement;

       std::cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
       std::getline(std::cin, text);
       std::cout << "Bitte den zu ersetzenden Buchstaben eingeben: ? ";
       std::cin >> toBeReplaced;
       std::cout << "Bitte den Ersatzbuchstaben eingeben: ? ";
       std::cin >> replacement;
       std::string newText = "";

       for(size_t i = 0; i < text.length(); i++)
       {
              if(text.at(i) == toBeReplaced)
              {
               
                     newText += replacement;
              }
              else
              {
                     newText += text.at(i);
              }
       }
       std::cout << "Der Text nach der Ersetzung: " <<newText << std::endl;
}