//
// Created by kelvi on 12/7/2022.
//

#include "binaerer_suchbaum.h"
#include "binaerer_suchbaum.h"

void suchbaum ::einfuegen(BaumKnoten *&Anker, int neu_wert)
{

    BaumKnoten *neu_knoten = new BaumKnoten;
    neu_knoten->wert = neu_wert;
    neu_knoten->rechts = nullptr;
    neu_knoten->links = nullptr;
    if (Anker == nullptr)
    {

        Anker = neu_knoten;
    }
    else
    {
        BaumKnoten *ptr = Anker;
        do
        {
            if (neu_wert == ptr->wert)
            {
                return;
            }
            if (neu_wert < ptr->wert)
            {
                do
                {
                    if (ptr->links == nullptr)
                    {
                        break;
                    }
                    ptr = ptr->links;
                    if (neu_wert > ptr->wert)
                    {
                        break;
                    }
                } while (ptr != nullptr);
            }
            else if (neu_wert > ptr->wert)
            {
                do
                {
                    if (ptr->rechts == nullptr)
                    {
                        break;
                    }
                    ptr = ptr->rechts;
                    if (neu_wert < ptr->wert)
                    {
                        break;
                    }
                } while (ptr != nullptr);
            }
            if (ptr->rechts == nullptr && neu_wert > ptr->wert)
            {

                ptr->rechts = neu_knoten;
                return;
            }
            if (ptr->links == nullptr && neu_wert < ptr->wert)
            {
                ptr->links = neu_knoten;
                return;
            }
        } while (ptr->rechts != nullptr || ptr->links != nullptr);

        ptr = neu_knoten;
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
