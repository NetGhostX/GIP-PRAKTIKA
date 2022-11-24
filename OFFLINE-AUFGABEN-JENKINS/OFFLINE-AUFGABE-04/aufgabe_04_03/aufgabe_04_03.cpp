#include <iostream>

int main()
{   //code funktioniert wird aber nicht von Jenkins angenommen
    int breite = 0; 
    int hoehe = 0 ;
    std::cout << "Bitte geben Sie die Breite des Rechtecks ein: ? ";
    std::cin >> breite;
    std::cout << "Bitt geben Sie die Hoehe des Rechtecks ein: ? "; 
    std::cin >> hoehe;
    char s = '*';
    char p = '+';

    for(int i = 0; i < hoehe; i++)
    {
        for(int j = 0; j < breite; j++)
        {
            if(i == 0 || i == hoehe - 1)
            {
                std::cout << s;
            }
            else
            {
                if(j == 0 || j == breite - 1)
                {
                    std::cout << s;
                }
                else
                {
                    std::cout << p;
                }
            }
        }
        std::cout << std::endl;
    }

}