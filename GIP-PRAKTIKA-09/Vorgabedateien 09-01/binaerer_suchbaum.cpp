//datei:: binaerer_suchbaum.cpp
//author:: Kelvin-Yawo 2017-10-11 09:00:00
//description:: binaerer_suchbaum.cpp
#include "binaerer_suchbaum.h"
#include <iostream>

void suchbaum::einfuegen(suchbaum::BaumKnoten *anker, int neuer_wert)
{
       suchbaum::BaumKnoten *neuerKnoten = new suchbaum::BaumKnoten; //creating a new node for the tree
       neuerKnoten->wert = neuer_wert; //assigning the value to the new node
       neuerKnoten->rechts = nullptr; //assigning the right pointer to null
       neuerKnoten->links = nullptr; //assigning the left pointer to null
       if (anker == nullptr)
       { //if the tree is empty
              anker = neuerKnoten;
       }
       else
       {
              suchbaum::BaumKnoten *aktuell = anker; //creating a pointer to the root node
              while (aktuell != nullptr)
              { //while the pointer is not null then we will traverse the tree
                     if (neuer_wert < aktuell->wert) 
                     {
                            if (aktuell->links == nullptr)
                            {
                                   aktuell->links = neuerKnoten;
                                   break;
                            }
                            else
                            {
                                   aktuell = aktuell->links;
                            }
                     }
                     else
                     {
                            if (aktuell->rechts == nullptr)
                            {
                                   aktuell->rechts = neuerKnoten;
                                   break;
                            }
                            else
                            {
                                   aktuell = aktuell->rechts;
                            }
                     }
              }
       }

}

void suchbaum::ausgeben(suchbaum::BaumKnoten *anker)
{
       if (anker != nullptr)
       {
              ausgeben(anker->links);
              std::cout << anker->wert << std::endl;
              ausgeben(anker->rechts);
       }
}

void suchbaum::knoten_ausgaben(BaumKnoten* knoten, unsigned int tiefe)
{
       if (knoten != nullptr)
       {
              knoten_ausgaben(knoten->links, tiefe + 1);
              for (unsigned int i = 0; i < tiefe; i++)
              {
                     std::cout << " ";
              }
              std::cout << knoten->wert << std::endl;
              knoten_ausgaben(knoten->rechts, tiefe + 1);
       }
}

// Path: Vorgabedateien 09-01\main.cpp
