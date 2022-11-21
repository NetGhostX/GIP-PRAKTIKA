#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
using namespace std;

#include "suchen_rekursiv.h"

int main()
{
    Catch::Session().run();

    cout << "Bitte geben Sie den Text ein: ";
    string text = "";
    getline(cin, text);

    cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
    string needle = "";
    getline(cin, needle);

    int pos = zeichenkette_suchen_rekursiv(text, needle);

    if (pos < 0) {
        cout << "Die Zeichenkette " << needle << "' ist NICHT in dem Text '" << text << "' enthalten" << endl;
    }
    else {
        cout << "Die Zeichenkette '" << needle << "' ist in dem Text '" << text << "' enthalten. " << endl;
        cout << "Sie startet ab Zeichen " << pos + 1 << endl;
    }

    system("PAUSE");
    return 0;
}