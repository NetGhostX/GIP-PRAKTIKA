#include "texte.h"
#include <string>

void spalte_ab_erstem(char zeichen, std::string eingabe, std::string& erster_teil, std::string& zweiter_teil)
{
    bool kamvor = false;
    for (size_t i = 0; i < eingabe.length(); i++)
    {
        if (kamvor == false)
        {
            if (zeichen == eingabe[i])
                kamvor = true;
            else
                erster_teil += eingabe[i];
        }
        else
        {
            zweiter_teil += eingabe[i];
        }
    }
}
std::string trimme(std::string s)
{
    std::string temp;
    int start = 0;
    int end = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != ' ')
        {
            start = i;
            break;
        }
    }
    for (int i = s.length() - 1; i > 0; i--)
    {
        if (s.at(i) != ' ')
        {
            end = i;
            break;
        }
    }
    for (int i = start; i <= end; i++)
    {
        temp += s.at(i);
    }
    return temp;
}