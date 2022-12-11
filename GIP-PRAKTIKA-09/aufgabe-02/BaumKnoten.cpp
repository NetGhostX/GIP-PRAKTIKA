//
// Created by kelvi on 12/7/2022.
//
#include <iostream>
using namespace std;
#include "Baumknoten.h"

void BaumKnoten::ausgeben(unsigned int tiefe) const
{
    tiefe++;
    if (this->rechts != nullptr)
    {
        // Rechter Knoten
        this->rechts->ausgeben(tiefe);
    }
    for (int i = 1; i < tiefe; i++)
    {
        cout << "++";
    }
    cout << data << endl;

    if (this->links != nullptr)
    {
        // tiefe++;
        // Linker Knoten
        this->links->ausgeben(tiefe);
    }
}