#include <iostream>
#include <string>
using namespace std;

string caesar(string original_text, unsigned int v)
{
    string cpytext = ""; //this variable stores the encrypted msg
    int tmp;  //converts the char to ascii

    for (int b = 0; b < original_text.length(); b++)
    {
        if (original_text.at(b) >= 97 && original_text.at(b) <= 122) //checks if the the string character is between 97 and 122 in ascii for
        {
            tmp = original_text.at(b);  //The temp variable stores the
            for (int c = 0; c < v; c++) //
            {
                if (tmp == 122) //if char is z then set the ascii value of char z to 97 (a)
                {
                    tmp = 97;
                }
                else
                {
                    tmp = tmp + 1; //just go a step further if tmp is not z or a
                }
            }
            cpytext = cpytext + char(tmp);
        }
        else if (original_text.at(b) >= 65 && original_text.at(b) <= 90) //same process for capital letters
        {
            tmp = original_text.at(b);
            for (int c = 0; c < v; c++)
            {
                if (tmp == 90)  //if char is A then set the ascii value of
                {
                    tmp = 65;
                }
                else
                {
                    tmp = tmp + 1;
                }
            }
            cpytext = cpytext + char(tmp);
        }

        else
        {
            cpytext = cpytext + original_text.at(b);
        }
    }
    return cpytext;

}

bool assert_equal(string original_text, unsigned int v, string erwarteter_verschluesselter_text)
{
    string berechneter_verschluesselter_text = caesar(original_text, v);

    if (berechneter_verschluesselter_text != erwarteter_verschluesselter_text)
    {
        cout << "Verschluesselungs-Test fehlgeschlagen (test case failed)!\n  Erwartet:  "
             << erwarteter_verschluesselter_text << endl
             << "  Berechnet: "
             << berechneter_verschluesselter_text << endl
             << "  Originaltext: " << original_text << endl
             << "  Anzahl Verschiebepositionen: " << v << endl;
        return false;
    }
    else
    {
        cout << "Verschluesselungs-Test erfolgreich (test case passed)! "
             << original_text
             << "  ==(" << v << ")==>  "
             << berechneter_verschluesselter_text << endl;
        return true;
    }
}

bool do_testcases()
{
    bool test_resultat = true;
    test_resultat = assert_equal("abc", 2, "cde") && test_resultat;
    test_resultat = assert_equal("ABC", 2, "CDE") && test_resultat;
    test_resultat = assert_equal("abc.,!?", 4, "efg.,!?") && test_resultat;
    test_resultat = assert_equal("apz", 2, "crb") && test_resultat;
    test_resultat = assert_equal("xYz. ABC", 5, "cDe. FGH") && test_resultat;
    test_resultat = assert_equal("., !?", 4, "., !?") && test_resultat;
    test_resultat = assert_equal("abcXYZ!", 0, "abcXYZ!") && test_resultat;
    test_resultat = assert_equal("", 7, "") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 26, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aB!", 28, "cD!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 52, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 78, "aBxYz!") && test_resultat;
    test_resultat = assert_equal("aBxYz!", 99, "vWsTu!") && test_resultat;
    test_resultat = assert_equal("abc def xyz!ABC XYZ?", 3, "def ghi abc!DEF ABC?") && test_resultat;
    test_resultat = assert_equal("Abc Zyx!", 55, "Def Cba!") && test_resultat;
    return test_resultat;
}

int main()
{
    if (do_testcases())
    {
        string text = "";
        unsigned int v = 0;
        cout << "Bitte geben Sie den zu verschluesselnden Text ein: ? ";
        getline(cin, text);
        cout << "Bitte geben Sie die Anzahl Verschiebepositionen "
             << "ein (als positive ganze Zahl): ? ";
        cin >> v;

        cout << "Verschluesselt: " << caesar(text, v) << endl;
    }

    system("PAUSE");
    return 0;
}
