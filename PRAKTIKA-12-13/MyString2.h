#pragma once
#include "CharListenKnoten.h"
#include <string>

class MyString2
{
	//aufgabe::13.1
private: 
	CharListenKnoten* anker; 

public: 
	MyString2() { anker = nullptr; }


	CharListenKnoten* get_anker() const { return this->anker; }
	void set_anker(CharListenKnoten* anker) { this->anker = anker; }

	//aufgabe 13.2
	~MyString2() { loesche_alle(anker); }

	//aufgabe:13.3
	MyString2(std::string& txt){anker = nullptr;	for (char c : txt){hinten_anfuegen(anker, c);}}

	MyString2(const MyString2& other){anker = deep_copy(other.anker);}

	MyString2& operator=(const MyString2& other)
	{
		if (this != &other)
		{
			loesche_alle(anker);
			anker = deep_copy(other.anker);
		}
		return *this;
	}

	//aufgabe13.5
	unsigned int length()const;
 
	char at(unsigned int pos) const;  	//aufgabe13.6

	std::string to_string() const;	//aufgabe13.7

	MyString2 MyString2::operator+(char c) const;
};