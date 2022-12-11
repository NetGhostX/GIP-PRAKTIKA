//
// Created by kelvi on 12/7/2022.
//

#ifndef AUFGABE_02_BINAERERSUCHBAUM_H
#define AUFGABE_02_BINAERERSUCHBAUM_H
#pragma once
#include "Baumknoten.h"

class BinaererSuchbaum
{
private:
    BaumKnoten *root = nullptr;

public:
    BaumKnoten *get_root() { return root; };
    void einfuegen(int);
    void ausgeben();
};

#endif //AUFGABE_02_BINAERERSUCHBAUM_H
