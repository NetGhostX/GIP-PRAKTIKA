// Datei: schritt_5_parse_term_testen.cpp

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

// Die Funktions-Prototypen ...
void parse_operand(std::string &input, std::size_t &pos);
void parse_number(std::string &input, std::size_t &pos);

void parse_term(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_term()" << std::endl;
 std::cout << "Betrete parse_term()" << std::endl;

    // ... (TODO)
    while (pos<=input.length())
    {
        if (input.at(pos) == '>')
        {
            expect('>', input, pos);
         //   parse_operand(input, pos);
        }
        else if (input.at(pos) == '<')
        {
            expect('<', input, pos);
            parse_operand(input, pos);
        }
        else
        {
            parse_operand(input, pos);
        }

    }
    std::cout << "Verlasse parse_term()" << std::endl;
}

void parse_operand(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_operand()" << std::endl;
    
    {
        // ... (TODO)
		if(expect('(', input, pos) == true)
		{
			std::cout << "Betrete parse_operande() : '(' Falls " << std::endl;
			match('(', input, pos);

		}
    }
    
    std::cout << "Verlasse parse_operand()" << std::endl;
}

void parse_number(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_number()" << std::endl;
    
    // ... (TODO)
		for(int number = 0; number < 10; number++)
	{
		std::cout << "Betrete parse_operand(): '(' Fall" << std::endl;
		match('0' + number, input, pos );
	}
         
    std::cout << "Verlasse parse_number(): '(' Fall " << std::endl;
}

int main()
{
	std::size_t pos = 0;
	std::string input;

	// Testfall 1 ...
	input = "2>1";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als term parsen: " << input << std::endl;
	parse_term(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}


	// Testfall 2 ...
	input = "4<3<2<1";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als term parsen: " << input << std::endl;
	parse_term(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}


	// Testfall 3 ...
	input = "1<a";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als term parsen: " << input << std::endl;
	parse_term(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}

	std::system("PAUSE");
	return 0;
}
