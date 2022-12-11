//
// Created by kelvi on 12/7/2022.
//

#include "binaerer_suchbaum.h"
#include "binaerer_suchbaum.h"

void suchbaum::einfuegen(BaumKnoten*& Anker, int neu_wert)
{
    if (Anker == nullptr)
    {
        BaumKnoten* neu_knoten = new BaumKnoten;
        neu_knoten->wert = neu_wert;
        neu_knoten->rechts = nullptr;
        neu_knoten->links = nullptr;
        Anker = neu_knoten;
        return;
    }

    if (neu_wert < Anker->wert)
    {
        einfuegen(Anker->links, neu_wert);
    }
    else if (neu_wert > Anker->wert)
    {
        einfuegen(Anker->rechts, neu_wert);
    }

    else
    {
        return;
    }
}


void suchbaum::ausgeben(BaumKnoten *knoten, unsigned int zaehler)
{

    zaehler++;
    if (knoten == nullptr)
    {

        zaehler--;
        return;
    }
    else
    {

        ausgeben(knoten->rechts, zaehler);

        suchbaum ::knoten_ausgeben(knoten, zaehler);
        ausgeben(knoten->links, zaehler);
    }
}
void suchbaum ::knoten_ausgeben(BaumKnoten *knoten, unsigned int tiefe)
{

    for (int a = 0; a < tiefe - 1; a++)
    {

        std::cout << "++";
    }
    std::cout << knoten->wert << std::endl;
}

void suchbaum ::uberpruefe(BaumKnoten *Anker)
{
    if (Anker == nullptr)
    {
        std::cout << "leer" << std::endl;
    }
    else
    {
        suchbaum::ausgeben(Anker, 0);
    }
}
