#include <iostream>

int main(){
    //drei kandidaten
    double stimmungen, kandidate_01,kandidate_02,kandidate_03;
    std::cout << "Bitte geben Sie die Gesamtzahl der abgegebenen gueltigen Stimmeen ein: ? ";
    std::cin >> stimmungen;
    std::cout << "Bitte geben Sie die Anzahl des ersten Kandidaten eine: ? ";
    std::cin >> kandidate_01;
    std::cout << "Bitte geben Sie die Anzahl des zweiten Kandidaten eine: ? ";
    std::cin >> kandidate_02;
    kandidate_03 = stimmungen -( kandidate_01+kandidate_02);
    std::cout << "Auf den dritten Kandidaten sind somit " << kandidate_03 << " Stimmen eintfallen" << std::endl;

    //aufgabe Teil b
    double per_kandidate_01 = (kandidate_01/stimmungen)* 100;
    std::cout << "Kandidate 1 erhielt " << per_kandidate_01 << " der Stimmen" << std::endl;
    double per_kandidate_02 = (kandidate_02/stimmungen)* 100;
    std::cout << "Kandidate 2 erhielt " << per_kandidate_02 << " der Stimmen" << std::endl;
    double per_kandidate_03 = (kandidate_03/stimmungen)*100;
    std::cout << "Kandidate 3 erhielt " << per_kandidate_03 << " der Stimmen" << std::endl;
    return 0; 
}