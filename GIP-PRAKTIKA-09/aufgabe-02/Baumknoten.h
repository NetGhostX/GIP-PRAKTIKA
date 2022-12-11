//
// Created by kelvi on 12/7/2022.
//

#ifndef AUFGABE_02_BAUMKNOTEN_H
#define AUFGABE_02_BAUMKNOTEN_H
#pragma once

class BaumKnoten
{
private:
    int data;
    BaumKnoten *links = nullptr;
    BaumKnoten *rechts = nullptr;

public:
    BaumKnoten(){};
    BaumKnoten(int w, BaumKnoten *l, BaumKnoten *r) : data{w}, links{l}, rechts{r} {};

    BaumKnoten *get_links() { return links; };
    BaumKnoten *get_rechts() { return rechts; };
    void set_links(BaumKnoten *n) { this->links = n; };
    void set_rechts(BaumKnoten *n) { this->rechts = n; }

    int get_data() { return data; };
    void set_data(int w) { this->data = w; };
    void ausgeben(unsigned int) const;
};

#endif //AUFGABE_02_BAUMKNOTEN_H
