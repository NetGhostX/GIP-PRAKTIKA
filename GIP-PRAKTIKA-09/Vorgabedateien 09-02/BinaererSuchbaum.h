#pragma once
#include <iostream>
#include "BaumKnoten.h"
class BaumKnoten;
class BinaererSuchbaum
{
private:
    BaumKnoten *root = nullptr;

public:
    BaumKnoten *get_root() { return root; };
    void set_root(BaumKnoten *knoten) { root = knoten; };
    // BinaererSuchbaum();

    void ausgeben();

    void go_right(BaumKnoten *&ptr, int wert);
    void go_left(BaumKnoten *&ptr, int wert);

    void einfuegen(int wert);
};