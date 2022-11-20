// Datei: schritt_2_match_verstehen.cpp

#include <iostream>
#include <string>

void match(char c, std::string &input, std::size_t &pos)
{
	std::cout << "Betrete match() fuer das Zeichen " << c << std::endl;
	if (pos >= input.length())
	{
		std::cout << "Error! Input-Zeichenkette zu kurz. "
			<< "Erwarte noch das Zeichen " << c << std::endl
			<< "Verlasse match()" << std::endl;
		return;
	}
	if (input.at(pos) != c)
	{
		std::cout << "Error! An Position "
			<< pos << " erwarte "
			<< c << " und sehe " << input.at(pos) << std::endl;
		std::cout << "Verlasse match()" << std::endl;
		return;
	}
	pos++;
	std::cout << "Zeichen " << c << " konsumiert.\n"
		<< "Verlasse match() fuer das Zeichen "
		<< c << std::endl;
}

int main()
{
	std::size_t pos = 0;
	std::string input;
	char c = '\0';

	// Testfall 1 ...
	c = 'a';
	input = "a";
	pos = 0;
	std::cout << std::endl
		<< "Moechte den Buchstaben " << c
		<< " konsumieren, bekomme " << input << std::endl;
	match(c, input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}
    
    
	// Testfall 2 ...
	c = 'a';
	input = "b";
	pos = 0;
	std::cout << std::endl
		<< "Moechte den Buchstaben " << c
		<< " konsumieren, bekomme " << input << std::endl;
	match(c, input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}


	// Testfall 3 ...
	c = '1';
	input = "2345";
	pos = 0;
	std::cout << std::endl
		<< "Moechte den Buchstaben " << c
		<< " konsumieren, bekomme " << input << std::endl;
	match(c, input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}

	std::system("PAUSE");
	return 0;
}
