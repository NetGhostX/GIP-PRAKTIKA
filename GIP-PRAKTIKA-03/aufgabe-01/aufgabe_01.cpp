#include <iostream>
using namespace std;
int main() {
  int t1, t2, m1, m2, j1, j2;

  cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
  cin >> t1;

  cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
  cin >> m1;

  cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
  cin >> j1;

  cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
  cin >> t2;

  cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
  cin >> m2;

  cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
  cin >> j2;
  int datum1[3], datum2[3];
  datum1[0] = t1;
  datum1[1] = m1;
  datum1[2] = j1;
  datum2[0] = t2;
  datum2[1] = m2;
  datum2[2] = j2;

  for (int i = 2; i >=0; i--) {
    if (datum1[i]>datum2[i])
    {
      cout<<"Das zweite Datum liegt vor dem erste Datum.";
      return 0;

    }
    else if (datum1[i]<datum2[i])
    {
      cout << "Das erste Datum liegt vor dem zweiten Datum.";
      return 0;
    }


  }

  cout << "Beide Datumsangaben sind gleich.";

  return 0;
}
