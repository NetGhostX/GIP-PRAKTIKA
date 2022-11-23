#pragma once
#include <string>

struct Person
{
    std::string nachname;
    std::string vorname;
    std::string geburtsdatum;
};

Person extrahiere_person(std::string eingabezeile);