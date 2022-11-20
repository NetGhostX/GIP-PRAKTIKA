#include <iostream>
#include <string>

int main()
{
    char in;

    std::cout << "Bitte geben Sie das Zeichen ein: ? ";
    std::cin >> in;

    if(in == 'e')
    {
        std::cout << "Das Programm beendeet sich jetzt.";
        return 0;
    }
    else if ((int)in >= 48 && (int)in <= 57)
    {
        int inToChar = (int)in - 48;
        const int five = 5;
        int final = inToChar + five;
        std::cout << inToChar << " + " << five << " = " << final;
    } 
    else{
        std::cout << "Weder 'e' noch Ziffer";

    }
    return 0; 
}