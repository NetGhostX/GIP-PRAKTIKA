#include "BaumKnoten.h"
class BinaererSuchbaum;

void BaumKnoten::set_data(int wert)
{
    data = wert;
}
void BaumKnoten::set_links(BaumKnoten *neuer_eintrag)
{
    links = neuer_eintrag;
}
void BaumKnoten::set_rechts(BaumKnoten *neuer_eintrag)
{
    rechts = neuer_eintrag;
}
void BaumKnoten::ausgeben(BaumKnoten *knoten, unsigned int tiefe)
{

    tiefe++;
    if (knoten == nullptr)
    {
        tiefe--;
        return;
    }

    ausgeben(knoten->get_rechts(), tiefe);

    for (int i = 0; i < tiefe - 1; i++)
    {
        std::cout << "++";
    }
    std::cout << knoten->get_data() << std::endl;

    ausgeben(knoten->get_links(), tiefe);
}