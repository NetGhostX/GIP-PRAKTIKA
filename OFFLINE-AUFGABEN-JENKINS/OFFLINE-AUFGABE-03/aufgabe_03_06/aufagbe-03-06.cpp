#include <iostream>

int main()
{
    int number[3] = {0};
    int min = 2^31; 
    int max = -2^31;


    for(int i = 0; i < 3; i++)
    {
        std::cout << "Bitte geben Sie die " << i+ 1 << ". Zahl ein: ? ";
        std::cin >> number[i];
        if(number[i]< min)
        {
            min = number[i];

        }
      if(number[i] >max)
      {
        max = number[i];
      }
    }
    std::cout << "Kleinste eingegebene Zahl lautet: " << min<< std::endl;
    std::cout << "Die groesste eingegebene Zahl lautet: " << max << std::endl;

}