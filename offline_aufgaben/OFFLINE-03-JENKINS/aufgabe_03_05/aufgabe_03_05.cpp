#include  <iostream>
#include <string>

int main()
{
    std::string text = "";
    std::cout << "Bitte geben Sie die Zeichenkette (6 Zeichen) ein: ? ";
    std::cin >> text;
    //detect the palindrom in the text 
    if(text[0] == text[5] && text[1] == text[4] && text[2] == text[3])
    {
        std::cout << "Das eingegebene Wort ist ein Palindrom.";
    }
    else
    {
        std::cout << "Das eingegebene Wort ist KEIN Palindrom.";
    }
    system("pause");
    return 0;
}