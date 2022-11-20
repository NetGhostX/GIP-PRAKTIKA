#include <iostream> 
int main(){
    //TODO: storing the input in a string
    std::string eingabe[11];
    std::string formatedEingabe= "";
    int sudoku[9][9] = {0};
    //storing the user input in eingabe[11]
    for(int i = 0; i < 11; i++){
        std::getline(std::cin, eingabe[i]);
    }
    //end of storing the user input in eingabe[11]

//filtering the numbers out and inserting them into a new var
for(int i= 0; i < 11 ; i++ ){
    for(int j = 0; j< eingabe[i].length(); j++)
    {
        if(((eingabe[i].at(j)) >= '0') && ((eingabe[i].at(j)) <='9') ){
            formatedEingabe += eingabe[i].at(j);
        }
    }
}
//end filtering
// reformatting into array with their respective positions in the array 
for (int i = 0; i<9; i++ )
{
    for (int j = 0; j<9; j++ )
    {
        sudoku[i][j] = int(formatedEingabe.at( j + i * 9)) -int('0');
        //
    }
}



//
for (int i = 0; i<9; i++ )
{
            if((i==3) || (i==6))
        {
            std::cout << "=======//=======//=======" << std::endl;
        }
    for (int j = 0; j<9; j++ )
    {

        if((j==3) || (j==6))
        {
            std::cout << ";//";
        }
        std::cout << ";" << sudoku[i][j];
    }
    std::cout << std::endl;
}
    return 0; 
}
