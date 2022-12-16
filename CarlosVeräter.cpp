#include <iostream>
#include <list>
#include <string>
#include <random>

class Carlos {
public:
    bool CarlosVeräter;
    std::list<std::string> victims;

    Carlos(bool veräter) : CarlosVeräter(veräter) {
        victims.push_back("Kelvin");
        victims.push_back("AJ");
        victims.push_back("Berat");
        victims.push_back("Batch");
        victims.push_back("Ben");
    }

    bool CarlosNotClean() {
        return true;
    }
};

int main() {
    Carlos carlos(false); 

    if (carlos.CarlosNotClean() == true) {
      
        std::cout << "\033[1;31m"; 
        std::cout << "#############################" << std::endl;
        std::cout << "# Victims of Carlos:       #" << std::endl;
        for (const std::string& victim : carlos.victims) {
            std::cout << "# " << victim << std::endl;
        }
        std::cout << "#############################" << std::endl;
        std::cout << "\033[0m"; 
    }
    else {
        std::cout << "Carlos is clean" << std::endl;
    }

    return 0;
}
