//datei:: binaerer_suchbaum.cpp
//author:: 2017-10-11 09:00:00
//description:: binaerer_suchbaum.cpp
#include "binaerer_suchbaum.h"

void suchbaum::einfuegen(suchbaum::BaumKnoten *anker, int neuer_wert)
{
       suchbaum::BaumKnoten *neuerKnoten = new suchbaum::BaumKnoten;
       neuerKnoten->wert = neuer_wert;
       neuerKnoten->rechts = nullptr;
       neuerKnoten->links = nullptr;
       if (anker == nullptr)
       {
              anker = neuerKnoten;
       }
       else
       {
              suchbaum::BaumKnoten *aktuell = anker;
              while (aktuell != nullptr)
              {
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
// Compare this snippet from Vorgabedateien 09-01\binaerer_suchbaum.h:

