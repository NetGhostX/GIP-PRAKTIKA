#include "BinaererSuchbaum.h"

class BaumKnoten;

void BinaererSuchbaum::einfuegen(int wert)
{

    BaumKnoten *neuer_eintrag = new BaumKnoten(wert, nullptr, nullptr);
    BaumKnoten *ptr = get_root();
    if (ptr == nullptr)
    {

        set_root(neuer_eintrag);
    }
    else
    {

        do
        {
            if (wert == ptr->get_data())
                return;
            if (wert > ptr->get_data())
            {
                go_right(ptr, wert);
            }
            else if (wert < ptr->get_data())
            {
                go_left(ptr, wert);
            }
            if (wert > ptr->get_data() && ptr->get_rechts() == nullptr)
            {
                ptr->set_rechts(neuer_eintrag);
                return;
            }
            if (wert < ptr->get_data() && ptr->get_links() == nullptr)
            {
                ptr->set_links(neuer_eintrag);
                return;
            }
        } while (ptr != nullptr);
    }
}

void BinaererSuchbaum::go_right(BaumKnoten *&ptr, int wert)
{
    do
    {
        if (ptr->get_rechts() == nullptr)
            break;

        ptr = ptr->get_rechts();

        if (wert < ptr->get_data())
            break;
    } while (ptr != nullptr);
}

void BinaererSuchbaum::go_left(BaumKnoten *&ptr, int wert)
{

    do
    {
        if (ptr->get_links() == nullptr)
            break;
        ptr = ptr->get_links();
        if (wert > ptr->get_data())
            break;

    } while (ptr != nullptr);
}

void BinaererSuchbaum::ausgeben()
{

    if (get_root() == nullptr)
    {
        std::cout << "Leerer Baum" << std::endl;
        return;
    }
    BaumKnoten *b = get_root();
    b->ausgeben(get_root(), 0);
}