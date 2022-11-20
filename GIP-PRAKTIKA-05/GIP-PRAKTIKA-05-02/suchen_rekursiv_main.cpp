// Datei: suchen_rekursiv_main.cpp

#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
#include <string>
using namespace std;

#include "suchen_rekursiv.h"

int main()
{
    Catch::Session().run();
	
    // Ihr Code ab hier ...
    std::cout << "Bitte geben Sie den Text ein: ";
    std::string text= "";
    std::getline(std::cin, text);


    std::cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
    std::string needle = "";
    std::getline(std::cin, needle);
    int pos = zeichenkette_suchen_rekursiv(text,needle);
    if(pos < 0)
    {
        std::cout << "Die Zeichenkette " << "'" << needle  <<"'" << "ist  NICHT in dem TEXT " << text << " enthalten." << std::endl;

    }
    else{
        std::cout << "Die Zeichenkette " << needle << "ist in dem TEXT " << text << " enthalten." << std::endl;
        std::cout << "Die Zeichenkette " << needle << " beginnt an der Position " << pos << " im Text." << std::endl;
    }

    system("PAUSE");
    return 0;
}