#include <iostream>
#include <string>
using namespace std;

const int sudoku_groesse = 9;
const int eingabe_groesse = 11;

bool pruefe_spalten(int sudoku[][sudoku_groesse])
{
}

bool pruefe_zeilen(int sudoku[][sudoku_groesse])
{
}

bool pruefe_bloecke(int sudoku[][sudoku_groesse])
{
}

void konvertiere(string eingabe[], int sudoku[][sudoku_groesse])
{
}

int main() 
{
    int sudoku[sudoku_groesse][sudoku_groesse] = { 0 };
    string eingabe[eingabe_groesse];

    cout << "Bitte geben Sie das Sudoku ein:" << endl;
    for (int i = 0; i < eingabe_groesse; i++)
        getline(cin, eingabe[i]);

    konvertiere(eingabe, sudoku);

    bool ps = pruefe_spalten(sudoku);
    bool pz = pruefe_zeilen(sudoku);
    bool pb = pruefe_bloecke(sudoku); 

    if (ps && pz && pb)
        cout << "Das Sudoku ist gueltig." << endl;

    system("PAUSE");
    return 0;
}
