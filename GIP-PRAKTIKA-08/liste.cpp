//
// Created by kelvi on 11/29/2022.
//


// Datei: liste.cpp

#include <string>
#include <iostream>
#include "liste.h"

std::string liste_als_string(TListenKnoten *anker)
{
    std::string resultat = "";

    if (anker == nullptr)
    {
        return "Leere Liste.";
    }
    else
    {
        resultat += "[ ";
        TListenKnoten *ptr = anker;
        do
        {
            resultat += std::to_string(ptr->data);

            if (ptr->next != nullptr)
            {
                resultat += " , ";
            }
            else
            {
                resultat += " ";
            }

            ptr = ptr->next;
        } while (ptr != nullptr);
        resultat += "]";
    }
    return resultat;
}

// Wird modifiziert in Aufgabe INF-08.01 ...
void hinten_anfuegen(TListenKnoten *&anker, const int wert)
{
    TListenKnoten *neuer_eintrag = new TListenKnoten;

    neuer_eintrag->data = wert;
    neuer_eintrag->next = nullptr;

    if (anker == nullptr)
    {
        neuer_eintrag->prev = nullptr;
        anker = neuer_eintrag;
    }
    else
    {
        TListenKnoten *ptr = anker;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }
        ptr->next = neuer_eintrag;
        neuer_eintrag->prev = ptr;
    }
}

std::string liste_als_string_rueckwaerts(TListenKnoten *anker)
{
    std::string resultat = "";

    if (anker == nullptr)
    {
        return "Leere Liste.";
    }
    else
    {
        resultat += "[ ";
        TListenKnoten *ptr = anker;
        while (ptr->next != nullptr)
        {
            ptr = ptr->next;
        }

        while (ptr->prev != nullptr)
        {
            resultat += std::to_string(ptr->data);
            resultat += " , ";
            ptr = ptr->prev;
        }
        resultat += std::to_string(ptr->data);
        resultat += " ]";
    }
    return resultat;
}

void in_liste_einfuegen(TListenKnoten *&anker, int wert_neu, int vor_wert)
{


    TListenKnoten *neuer_eintrag = new TListenKnoten;
    neuer_eintrag->data = wert_neu;

    if (anker == nullptr)
    {
        neuer_eintrag->prev = nullptr;
        neuer_eintrag->next = nullptr;
        anker = neuer_eintrag;
    }
    else
    {

        TListenKnoten *ptr = anker;
        do
        {

            if (ptr->next == nullptr && ptr->data != vor_wert)
            {

                neuer_eintrag->next = nullptr;

                ptr->next = neuer_eintrag;
                neuer_eintrag->prev = ptr;
                break;
            }

            if (ptr->data == vor_wert)
            {

                if (ptr->prev == nullptr)
                {

                    neuer_eintrag->next = ptr;
                    neuer_eintrag->prev = nullptr;
                    ptr->prev = neuer_eintrag;

                    anker = neuer_eintrag;
                }
                else
                {

                    ptr->prev->next = neuer_eintrag;
                    neuer_eintrag->prev = ptr->prev;
                    ptr->prev = neuer_eintrag;

                    neuer_eintrag->next = ptr;
                }

                break;
            }
            ptr = ptr->next;
        } while (ptr != nullptr);

    }
}
void aus_liste_loeschen(TListenKnoten *&anker, int wert)
{
    if (anker == nullptr)
        ;
    else
    {

        TListenKnoten *ptr = anker;
        do
        {
            if (ptr->next == nullptr && ptr->data != wert)
            {
                break;
            }
            if (ptr->data == wert)
            {
                if (ptr->next == nullptr && ptr->prev != nullptr)
                {
                    ptr->prev->next = nullptr;
                    delete ptr;
                    break;
                }
                if (ptr->prev == nullptr && ptr->next == nullptr)
                {

                    anker = nullptr;
                    break;
                }
                if (ptr->prev == nullptr)
                {
                    ptr->next->prev = nullptr;
                    anker = ptr->next;
                    delete ptr;
                    break;
                }
                else
                {
                    ptr->prev->next = ptr->next;
                    ptr->next->prev = ptr->prev;
                    delete ptr;
                }
                break;
            }
            ptr = ptr->next;

        } while (ptr != nullptr);
    }
}