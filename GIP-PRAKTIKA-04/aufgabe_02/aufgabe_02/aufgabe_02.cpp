#include <iostream>
#include <string>
using namespace std;


void print_sodoku(int soduku[9][9]) {
    cout << endl << "Das Soduko lautet: " << endl;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << ";" << soduku[i][j];

            if (j == 2 || j == 5) {
                cout << "//";
            }
        }

        if (i == 2 || i == 5) {
            cout << endl << "=======//=======//=======";
        }

        cout << endl;
    }

}

int main() {
    int sudoku[9][9] = { 0 };
    string eingabe[11];

    int getter[9] = {1, 3, 5, 9, 11, 13, 17, 19, 21};

    cout << "Bitte geben Sie das Sudoku ein: " << endl;

    for (int i = 0; i < 11; i++) {
        string in;
        cin >> in;

        eingabe[i] = in;
    }

    for (int i = 0; i < 11; i++) {
        // cout << "debug: (i: " << i << "): " << eingabe[i] << endl;

        if (i == 3 || i == 7) continue;

        int sudoku_array_index = i;

        if (i > 3) sudoku_array_index -= 1;
        if (i > 7) sudoku_array_index -= 1;


        for (int j = 0; j < 9; j++) {
            int index_to_get = getter[j];

            sudoku[sudoku_array_index][j] = eingabe[i].at(index_to_get) - '0';
        }
    }

    print_sodoku(sudoku);



    return 0;
}
