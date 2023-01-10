#pragma once
class CharListenKnoten
{
private:
	char data;
	CharListenKnoten* next; 
	int my_id;

public:
	CharListenKnoten(){}
	CharListenKnoten(char data_input, CharListenKnoten* Next_ = nullptr) : data(data_input), next(Next_)
	{
		my_id = next_available_id++;
		object_count++;
	}

	char get_data() const { return this->data; }
	CharListenKnoten* get_next() const { return this->next; }
	int get_my_id() const { return this->my_id; }

	void set_data(char Data) { this->data = Data; }
	void set_next(CharListenKnoten* Next) { this->next = Next; }
	
	static int next_available_id;
	static int object_count;
	~CharListenKnoten() {object_count--; }
};
void hinten_anfuegen(CharListenKnoten*& anker, const char wert);
void loesche_alle(CharListenKnoten*& anker);
CharListenKnoten* deep_copy(CharListenKnoten* orig);