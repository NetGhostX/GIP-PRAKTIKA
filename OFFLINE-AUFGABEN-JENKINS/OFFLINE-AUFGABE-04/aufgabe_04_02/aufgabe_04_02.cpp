#include <iostream>

int main()
{
    for (int z = 1, wert2 = 10, wert3 = 10; z < 11; z++, wert2 *= 2, wert3 *= 3)
    {
        std::cout << "Zeile: " << z
             << " Verdoppler: " << wert2
             << " Verdreifacher: " << wert3
             << std::endl;
    }
    system("PAUSE");
    return 0;
}