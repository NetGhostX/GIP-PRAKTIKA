//
// Created by kelvi on 12/7/2022.
//
#include <iostream>
using namespace std;
#include <BinaererSuchbaum.h>

void BinaererSuchbaum::einfuegen(int w)
{
    BaumKnoten *nEintrag = new BaumKnoten;
    nEintrag->set_data(w);

    if (root == nullptr)
    {
        root = nEintrag;
    }
    else
    {
        BaumKnoten *ptr = root;
        while (ptr != nullptr)
        {
            if (ptr->get_data() > w)
            {
                if (ptr->get_links() == nullptr)
                {
                    ptr->set_links(nEintrag);
                }
                else
                {
                    ptr = ptr->get_links();
                }
            }
            else if (ptr->get_data() < w)
            {
                if (ptr->get_rechts() == nullptr)
                {
                    ptr->set_rechts(nEintrag);
                }
                else
                {
                    ptr = ptr->get_rechts();
                }
            }
            else if (ptr->get_data() == w)
            {
                break;
            }
        }
    }
}

void BinaererSuchbaum::ausgeben()
{
    if (root == nullptr)
        cout << "Leerer Baum." << endl;
    else
    {
        unsigned int tiefe = 0;
        this->root->ausgeben(tiefe);
    }
}
