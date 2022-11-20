#include <iostream>
#include <string>
#include "text.h"

void spalte_ab_erstem(char zeichen, std::string input, 
                    std::string& erster_teil,
                    std::string& zweiter_teil )
{
    for(int i= 0; i < input.length(); i++)
    {
        if(input.at(i) != zeichen)
        {
            erster_teil += input.at(i);
        }
        else if(input.at(i) == zeichen)
        {
            for(int j = i+1; j < input.length(); j++)
            {
                zweiter_teil += input.at(j);
            }
            break;
        }
    }
}



std::string replace(std::string zeile, char zu_ersetzendes_zeichen, std::string ersatztext)

{
    std::string modified_txt = "";
    for( int i = 0; i < zeile.length(); i++)
    {
        modified_txt += zeile.at(i);
        if(zeile.at(i) == zu_ersetzendes_zeichen)
        {
            for(int k = 0; k < ersatztext.length(); k++)
            {
                modified_txt += ersatztext.at(k);
            }
        }
    } 
    return modified_txt;

}

int main()
{
    std::string  string_combination = "";
    char replace_char;
    std::string replace_string = "";

    //taking input for the text combination
    std::cout << "Bitte geben Sie die Textzeile ein: ";
    std::getline(std::cin, string_combination);


    std::cout << "Bitte geben Sie das zu ersetzende Zeichen ein ? ";
    std::cin >> replace_char;

    //taking input for the replacement string
    std::cout << "Bitte geben Sie den Ersatztext ein ? ";
    std::cin >> replace_string;


    replace(string_combination, replace_char, replace_string);
    std::cout << string_combination << std::endl;
}