
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int a = 0, gr = 0;
    do
    {

        cout << "Text: ? ";

        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (!(s.at(i) >= 'a' && s.at(i) <= 'z'))
            {
                a = -1;
                break;
            }
            a = 0;
        }
    } while (a == -1);

    gr = s.length() - 1;
    int c = gr - 1;

    for (int i = 0; i < s.length() / 2; i++)
    {
        if (!(s.at(i) == s.at(gr - i)))
        {
            cout << "Das eingegebene Wort ist KEIN Palindrom." << endl;
            system("pause");
            return 0;
        }
    }

    cout << "Das eingegebene Wort ist ein Palindrom." << endl;
    system("pause");
    return 0;
}