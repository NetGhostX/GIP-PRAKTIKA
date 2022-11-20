// Datei: schritt_1_expect_verstehen.cpp

#include <iostream>
#include <string>
#include <iomanip>

bool expect(char c, std::string &input, std::size_t pos)
{
	std::cout << "Teste auf das Zeichen " << c << std::endl;
	if (pos >= input.length())
	{
		std::cout << "Aber schon am Ende der "
			<< "Eingabe-Zeichenkette angelangt.\n";
		return false;
	}
	if (input.at(pos) == c)
	{
		std::cout << "Zeichen " << c << " gefunden." << std::endl;
		return true;
	}
	else
	{
		std::cout << "Test auf " << c << " nicht erfolgreich. "
			<< "Stattdessen " << input.at(pos)
			<< " gesehen.\n";
		return false;
	}
}

int main()
{
	std::size_t pos = 0;
	std::string input;
	char expecting = '\0';
	bool resultat = false;

	// Testfall 1 ...
	expecting = 'a';
	input = "a";
	pos = 0;
	std::cout << "Erwarte den Buchstaben " << expecting
		<< ", bekomme " << input << std::endl;
	resultat = expect(expecting, input, pos);
	std::cout << "Resultat ist: " 
		<< std::boolalpha << resultat
		<< "\n\n";
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}
    
	// Testfall 2 ...
	expecting = 'a';
	input = "b";
	pos = 0;
	std::cout << "Erwarte den Buchstaben " << expecting
		<< ", bekomme " << input << std::endl;
	resultat = expect(expecting, input, pos);
	std::cout << "Resultat ist: "
		<< std::boolalpha << resultat
		<< "\n\n";
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig. Damn boi" << std::endl;
	}
    
	// Testfall 3 ...
	expecting = '1';
	input = "2345";
	pos = 0;
	std::cout << "Erwarte den Buchstaben " << expecting
		<< ", bekomme " << input << std::endl;
	resultat = expect(expecting, input, pos);
	std::cout << "Resultat ist: "
		<< std::boolalpha << resultat
		<< "\n";
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}

	std::system("PAUSE");
	return 0;
}
