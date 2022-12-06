#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ar[9];
    int i = 0;
    for (int i = 0; i < 9; i++)
    {
        cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
        cin >> ar[i];

        if (ar[i] > 6 || ar[i] < 1)
            i--;
    }
    for (int i = 0; i < 9; i++)
    {
        cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << ar[i] << endl;
    }
    system("pause");
    return 0;
}