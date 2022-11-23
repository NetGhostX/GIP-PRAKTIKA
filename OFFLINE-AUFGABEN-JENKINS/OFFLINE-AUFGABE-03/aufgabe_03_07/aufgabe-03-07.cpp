#include <iostream>

int main()
{
    const int verg_number  = 99;
    int user_input[4] = {0};
    int counter; 
    for(int i = 0; i < 4; i++)
    {
        std::cout << "Bitte geben Sie " << i + 1 << ". Zahl ein: ? "; 
        std::cin >> user_input[i];

        if(user_input[i]==verg_number)
        {
            counter++;
        }
    }

    std::cout << counter << " Eingabezahlen waren gleich der Vergleichszahl " << verg_number << std::endl;
    std::cout << 4-counter<< " Eingabezahlen waren ungleich der Vergleichszahl " << verg_number << std::endl;


}