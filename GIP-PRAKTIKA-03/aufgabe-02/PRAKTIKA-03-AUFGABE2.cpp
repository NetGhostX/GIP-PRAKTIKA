#include <iostream>
using namespace std;
int main()
{
    int a, min, max;
    int alleEingaben[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ";
        cin >> alleEingaben[i];
    }
    int pos_min = 1;
    int pos_max = 1;
    min = alleEingaben[0];
    max = alleEingaben[0];

    for (int b = 0; b < 5; b++)
    {
        if (alleEingaben[b] < min)
        {
            min = alleEingaben[b];
            pos_min = b + 1;
        }
    }

    for (int b = 0; b < 5; b++)
    {
        if (alleEingaben[b] > max)
        {
            max = alleEingaben[b];
            pos_max = b + 1;
        }
    }

    cout << "Die " << pos_min << ". Zahl war die kleinste der eingegebenen Zahlen und lautet: " << min << endl;
    cout << "Die " << pos_max << ". Zahl war die groesste der eingegebenen Zahlen und lautet: " << max << endl;

    return 0;
}
