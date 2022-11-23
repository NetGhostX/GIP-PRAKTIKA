#include <iostream>
#include <string>
#include <fstream>
#include "person.h"
// Weglassen / vermeiden: using namespace std;
std::string br(std::string);
std::string b(std::string);
std::string ersetze(std::string zeile, char zu_ersetzendes_zeichen, std::string ersatztext);

int main()
{
    std::string eingabezeile, kurztext = "", langtext = "", eingabezeile2;
    std::fstream Datendatei("personendaten.txt");
    std::string zeile;
    if (!Datendatei)
    {
        std::cout << "fehler eingabedatei" << std::endl;
    }
    while (getline(Datendatei, eingabezeile))
    {
        Person person = extrahiere_person(eingabezeile);
        // Dann person.vorname, person.nachname,
        // person.geburtsdatum ausgeben
        // std::cout << zeile << std::endl;
        kurztext += br(
            b(person.nachname) + ", " + person.vorname) +
            "\n";
        // Langtext erstellen ...
        langtext += br(
            b(person.vorname + " " + person.nachname) +
            ", " + person.geburtsdatum) +
            "\n";
    }
    Datendatei.close();

    std::ifstream d2("webseite.html.tmpl");
    std::ofstream d3("webseite.html", std::ios::app);

    if (!d2)
    {
        std::cout << "fehler d2" << std::endl;
    }
    if (!d3)
    {
        std::cout << "fehler d3" << std::endl;
    }

    while (getline(d2, eingabezeile2))
    {
        eingabezeile2 = ersetze(eingabezeile2, '%', kurztext);
        eingabezeile2 = ersetze(eingabezeile2, '$', langtext);

        d3 << eingabezeile2 + "\n"; // ausgabedatei
    }
    d2.close();
    d3.close();

    system("pause");
    return 0;
}

std::string br(std::string s)
{
    return s + "<br/>";
}
std::string b(std::string s)
{
    return "<b>" + s + "</b>";
}
std::string ersetze(std::string zeile, char zu_ersetzendes_zeichen, std::string ersatztext)
{
    std::string str = "";

    for (int c = 0; c < zeile.length(); c++)
    {
        if (zeile.at(c) == zu_ersetzendes_zeichen)
        {
            str += ersatztext;
        }
        else
        {
            str += zeile.at(c);
        }
    }
    return str;
}