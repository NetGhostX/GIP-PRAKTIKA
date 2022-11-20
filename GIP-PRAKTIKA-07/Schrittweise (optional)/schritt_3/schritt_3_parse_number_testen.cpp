// Datei: schritt_3_parse_number_testen.cpp

#include <iostream>
#include <string>

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

void parse_number(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_number()" << std::endl;
    
    for(int number = 0; number < 10; number++)
	{
		match('0'+number, input, pos);
	} 
         
    std::cout << "Verlasse parse_number()" << std::endl;
}

int main()
{
	std::size_t pos = 0;
	std::string input;

	// Testfall 1 ...
	input = "3";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als number parsen: " << input << std::endl;
	parse_number(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}
    
    
	// Testfall 2 ...
	input = "a";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als number parsen: " << input << std::endl;
	parse_number(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}
    

	// Testfall 3 ...
	input = "2345";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als number parsen: " << input << std::endl;
	parse_number(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}

	std::system("PAUSE");
	return 0;
}
