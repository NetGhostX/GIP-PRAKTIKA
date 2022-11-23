#include <iostream>
#include <string>

int main()
{
    std::string text = "";
    std::cout << "Bitte geben Sie die Textzeile ein: ? ";
    std::cin >> text;
    int counter = 0;

    std::string newText = "";

    for(int i = 0; i < text.length();i++)
    {
        while(text[i]== '+')
        {
            counter++;
            if(text.at(i) >= 'a' || text.at(i) <= 'z')
            {
                break;
            
        }

    }
    std::cout << counter;
}
}