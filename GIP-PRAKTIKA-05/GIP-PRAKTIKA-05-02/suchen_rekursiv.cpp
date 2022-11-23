#include <iostream>
using namespace std;
#include <string>


int zeichenkette_suchen_rekursiv(string text,
    string zkette,
    size_t text_pos,
    size_t text_such_pos,
    size_t zkette_such_pos
)

{
    if (zkette.length() == 0 || text_such_pos >= text.length()) {
        return -1;
    }



    if (text.at(text_such_pos) == zkette.at(zkette_such_pos)) {

        if (zkette_such_pos >= zkette.length() - 1)
        {
            return text_pos;
        }

        return zeichenkette_suchen_rekursiv(text, zkette, text_pos, text_such_pos + 1, zkette_such_pos + 1);
    }


    return zeichenkette_suchen_rekursiv(text, zkette, text_pos + 1, text_pos + 1, 0);
}
