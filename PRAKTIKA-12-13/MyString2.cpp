#include "MyString2.h"
#include "iostream"

unsigned int MyString2::length() const
{
    unsigned int counter = 0;
    CharListenKnoten* current = anker;
    while (current != nullptr)
    {
        counter++;
        current = current->get_next();
    }
    return counter;
}

char MyString2::at(unsigned int pos) const
{
    CharListenKnoten* current = anker; 
    if (current == nullptr || pos > length()-1)
    {
        return '\0';
    }
    else
    {
        for (unsigned int i = 0; i < MyString2::length(); i++)
        {
            if (pos == i){return current->get_data();}
            current = current->get_next();
        }
    }
}
std::string MyString2::to_string() const
{
    std::string result;
    for (unsigned int i = 0; i < MyString2::length(); i++)
    {
        result += at(i);
    }
    return result; 
}

MyString2 MyString2::operator+(char c) const
{
    MyString2 result = *this;
    hinten_anfuegen(result.anker, c);
    return result;
}


