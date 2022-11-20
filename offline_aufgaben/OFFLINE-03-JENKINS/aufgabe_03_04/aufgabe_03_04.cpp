#include <iostream>

int main()
{
    int time;

    std::cout <<"Bitte geben Sie die Stunde der aktuellen Uhrzeit ein: ? ";
    std::cin >> time;
    if(time <= 5 && !(time< 0)|| time == 23 )
    {
        std::cout << "Gute Nacht.";

    }
    else if(time > 5 && time <= 10 )
    {
        std::cout << "Guten Morgen.";
    }
    else if(time > 10 && time <= 13)
    {
        std::cout << "Mahlzeit.";
    }
    else if(time > 13 && time <=17 )
    {
        std::cout << "Guten Tag.";
    }
    else if(time > 17 && time <= 22)
    {
        std::cout << "Guten Abend.";
    }
    else
    {
        std::cout << "Keine erlaubte Stundenangebote.";

    }
    system("pause");
    
    return 0;
}