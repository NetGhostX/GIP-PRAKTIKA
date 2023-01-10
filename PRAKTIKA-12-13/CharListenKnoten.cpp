#include "CharListenKnoten.h" //Datei: CharListenKnoten.h

int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;

void hinten_anfuegen(CharListenKnoten*& anker, const char wert)
{
	CharListenKnoten* node = new CharListenKnoten(wert);
	node->set_next(nullptr);
	if (anker == nullptr){anker = node;}
	else
	{
		CharListenKnoten* current = anker; 
		while (current->get_next() != nullptr)
		{
			current = current->get_next();
		}
		current->set_next(node);
	}
}

void loesche_alle(CharListenKnoten*& anker)
{
	if (anker == nullptr)
	{
		return;
	}
	CharListenKnoten* next_ = anker->get_next();
	delete anker;
	anker = nullptr;
	loesche_alle(next_);
}
CharListenKnoten* deep_copy(CharListenKnoten* orig)
{
	if (orig == nullptr){return nullptr;}
	CharListenKnoten* copy = new CharListenKnoten(orig->get_data());
	copy->set_next(deep_copy(orig->get_next()));
	return copy;
}