#include <iostream>
/*
********** 
.*++++++++* 
..*++++++++* 
...*++++++++* 
....**********
 */
int main()
{
    //decarling variables
    int breite;
    int length;

    //asking for input
    std::cout << "Bitte geben Sie die Breite des Parallelogramms ein: ";
    std::cin >> breite;
    std::cout << "Bitte geben Sie die Laenge des Parallelogramms ein: ";
    std::cin >> length;

    //print out the parallelogram as indicated in the comment above
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << ".";
        }
        for (int k = 0; k < breite; k++)
        {
            if (i == 0 || i == length - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << "+";
            }
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;

}