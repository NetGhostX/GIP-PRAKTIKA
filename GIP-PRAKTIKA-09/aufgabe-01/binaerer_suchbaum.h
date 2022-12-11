//
// Created by kelvi on 12/7/2022.
//

#ifndef AUFGABE_01_BINAERER_SUCHBAUM_H
#define AUFGABE_01_BINAERER_SUCHBAUM_H
#include <iostream>
namespace suchbaum
{
    struct BaumKnoten
    {
        int wert;
        BaumKnoten *links;
        BaumKnoten *rechts;
    };
    void einfuegen(BaumKnoten *&Anker, int neu_wert);
    void ausgeben(BaumKnoten *knoten, unsigned int zaehler);
    void knoten_ausgeben(BaumKnoten *knoten, unsigned int tiefe);
    void uberpruefe(BaumKnoten *Anker);

}



#endif //AUFGABE_01_BINAERER_SUCHBAUM_H
