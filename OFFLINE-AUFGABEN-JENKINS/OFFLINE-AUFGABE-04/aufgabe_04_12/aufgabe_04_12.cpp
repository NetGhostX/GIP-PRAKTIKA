#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
    getline(cin, s);
    int size = s.length(), c = 0;
    string s_tmp = s;
    for (int i = 0; i < size; i++)
    {
        char x = s_tmp.at(i);

        if (int(x) <= 90 && int(x) >= 65)
        {
            s.insert(i + c, 2, x);
            c += 2;
        }
        if (s_tmp.at(i) == ' ')
            s.replace(i + c, 1, "_");
        if (int(x) < 58 && int(x) > 47)
            s.replace(i + c, 1, ".");
        if (s_tmp.at(i) == '?' || s_tmp.at(i) == '!')
        {
            s.erase(i + c, 1);
            c--;
            
        }
        if (int(x) < 123 && int(x) > 96)
        {
            s.insert(i + c, 1, x);
            c++;
        }
    }
    cout << "Der Text nach der Umwandlung: " << s << endl;
    system("pause");
    return 0;
}