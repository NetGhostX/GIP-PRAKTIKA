#include "person.h"
#include "texte.h"
#include <string>
#include <iostream>

Person extrahiere_person(std::string eingabezeile)
{
    Person p;
    std::string rest;
    spalte_ab_erstem(',', eingabezeile, p.nachname, rest);
    spalte_ab_erstem(',', rest, p.vorname, p.geburtsdatum);
    p.nachname = trimme(p.nachname);
    p.vorname = trimme(p.vorname);
    p.geburtsdatum = trimme(p.geburtsdatum);
    return p;
}