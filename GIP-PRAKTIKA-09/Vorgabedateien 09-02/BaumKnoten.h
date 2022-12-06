#pragma once
#include <iostream>
#include "BinaererSuchbaum.h"
class BinaererSuchbaum;
class BaumKnoten
{
private:
    int data = 0;
    BaumKnoten *links = nullptr;
    BaumKnoten *rechts = nullptr;

public:
    BaumKnoten(int wert, BaumKnoten *ptr1, BaumKnoten *ptr2) : data(wert), links(ptr1), rechts(ptr2){};

    void ausgeben(BaumKnoten *knoten, unsigned int tiefe);
    int get_data() { return data; };
    void set_links(BaumKnoten *left);
    void set_rechts(BaumKnoten *right);
    void set_data(int wert);
    BaumKnoten *get_links() { return links; };
    BaumKnoten *get_rechts() { return rechts; };
};
