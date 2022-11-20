#include <iostream>
#include <string>


/*
 * Write a C++ program that takes a single-line string
text reads and in this character string always a character with a
covers asterisks.
The asterisk can be left by the user by typing l or r
or to the right. In the previous position, this should
previously covered original characters of the input text reappear.
Typing q ends the program.
It shouldn't be possible to put the asterisk over the left or right
move out the edge of the string. Appropriate commands
do not change the current state (see the first two
inputs of the test run).
 */



int main()
{
    std::string text;
    char a  = '*';
    char b;
    std::cout << "Bitte geben Sie den Text ein: ? ";
    std::getline(std::cin, text);
    do{
        std::cout text << std::endl;
    }

}