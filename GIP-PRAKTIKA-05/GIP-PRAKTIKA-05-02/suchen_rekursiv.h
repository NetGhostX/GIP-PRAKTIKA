#pragma once 
#include <iostream>
#include <string>

int zeichenkette_suchen_rekursiv(std::string text,
                                    std::string zkette, 
                                    size_t text_pos = 0,
                                    size_t text_suche_pos = 0,
                                    size_t zkette_suche_pos = 0

){
    if(zkette.length() == 0 || text_suche_pos >= text.length()){
        return -1;
    }
    if(text.at(text_suche_pos) == zkette.at(zkette_suche_pos)){
        if(zkette_suche_pos == zkette.length() - 1){
            return text_pos;
        }
        return zeichenkette_suchen_rekursiv(text, zkette, text_pos, text_suche_pos + 1, zkette_suche_pos + 1);
    }
    else{
        return zeichenkette_suchen_rekursiv(text, zkette, text_pos + 1, text_pos + 1, 0);
    }
    return 0;
}