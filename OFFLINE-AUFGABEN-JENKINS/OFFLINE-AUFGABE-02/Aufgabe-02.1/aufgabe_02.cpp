//berechnung des umfangs und der fläche eines Quadrats
#include <iostream>
//using namespace std;
int main(){
	//taking an input from the user
	double seitenlänge;
	std::cout << "Bitte geben Sie die Seitenlaenge ein (in cm): ? " ;
	std::cin >> seitenlänge;
	double result = seitenlänge *seitenlänge;
	double umfang = 2*(seitenlänge+seitenlänge);

	std::cout << "Der Umfang des Quadrats betraegt (in cm): " <<umfang << std::endl;
	std::cout << "Die Flaeche des Quadrats betraegt (in cm*cm): " << result << std::endl;


}

