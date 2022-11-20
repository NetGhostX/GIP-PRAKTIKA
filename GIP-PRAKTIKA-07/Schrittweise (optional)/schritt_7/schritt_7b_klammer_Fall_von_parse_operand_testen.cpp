// Datei: schritt_7b_klammer_Fall_von_parse_operand_testen.cpp

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
void parse_ausdruck(std::string &input, std::size_t &pos);
void parse_term(std::string &input, std::size_t &pos);
void parse_operand(std::string &input, std::size_t &pos);
void parse_number(std::string &input, std::size_t &pos);

void parse_gesamtausdruck(std::string &input, std::size_t &pos)
{
	std::cout << "Betrete parse_gesamtausdruck()" << std::endl;
	parse_ausdruck(input, pos);
	match('.', input, pos);
	std::cout << "Verlasse parse_gesamtausdruck()" << std::endl;
}

void parse_ausdruck(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_ausdruck()" << std::endl;
    
    // ... (TODO)
    
    while ( expect('U', input, pos) ||
            expect('O', input, pos) )
    {
        if (expect('U', input, pos))
        {
            std::cout << "Betrete parse_ausdruck(): U Fall" << std::endl;
            
            // ... (TODO)
            
            std::cout << "Verlasse parse_ausdruck(): U Fall" 
                 << std::endl;
        }
        else if ( expect('O', input, pos) )
        {
            std::cout << "Betrete parse_ausdruck(): O Fall" << std::endl;
            
            // ... (TODO)
            
            std::cout << "Verlasse parse_ausdruck(): O Fall" 
                      << std::endl;
        }
    }
    std::cout << "Verlasse parse_ausdruck()" << std::endl;
}

void parse_term(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_term()" << std::endl;
    
    // ... (TODO)
    
    std::cout << "Verlasse parse_term()" << std::endl;
}

void parse_operand(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_operand()" << std::endl;

    if ( expect('(', input, pos) )
    {
        std::cout << "Betrete parse_operand(): '(' Fall" << std::endl;
        
        match('(', input, pos);
        parse_ausdruck(input, pos);

        // ... (TODO)
        
        std::cout << "Verlasse parse_operand(): '(' Fall" << std::endl;        
    }
    else {
        // ... (TODO)
    }
    
    std::cout << "Verlasse parse_operand()" << std::endl;
}

void parse_number(std::string &input, std::size_t &pos)
{
    std::cout << "Betrete parse_number()" << std::endl;
    
    // ... (TODO)
         
    std::cout << "Verlasse parse_number()" << std::endl;
}

int main()
{
	std::size_t pos = 0;
	std::string input;

	// Testfall 1 ...
	input = "(1<2)";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als operand parsen: " << input << std::endl;
	parse_operand(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}


	// Testfall 2 ...
	input = "(1U2)";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als operand parsen: " << input << std::endl;
	parse_operand(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}


	// Testfall 3 ...
	input = "(1<2)a";
	pos = 0;
	std::cout << std::endl
		<< "Moechte folgenden Input als operand parsen: " << input << std::endl;
	parse_operand(input, pos);
	// Ergaenzende Pruefung ...
	if (pos != input.length()) {
		std::cout << "Error! Noch Input-Zeichen uebrig." << std::endl;
	}

	std::system("PAUSE");
	return 0;
}
