// exemplo01.cpp
/*
Programa que demonstra como declarar vários tipos de arrays
*/

#include <iostream>
#include <string>

int main(){
    std::cout << "\nExemplos de Arrays Unidimensionais\n\n";

    // Declara os arrays
    int arrayInt[5] = {1, 2, 3, 4, 5};
    float arrayFloat[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    double arrayDouble[5] = {1.11, 2.22, 3.33, 4.44, 5.55};
    char arrayChar[5] = {'a', 'e', 'i', 'o', 'u'};
    std::string arrayStrings[5] = {"Cris", "Renata", "Joao", "Miranda", "Romao"};

    // Exibe o primerio elemento de cada array
    std::cout << "arrayInt[0]: " << arrayInt[0] << std::endl;
    std::cout << "arrayFloat[0]: " << arrayFloat[0] << std::endl;
    std::cout << "arrayDouble[0]: " << arrayDouble[0] << std::endl;
    std::cout << "arrayChar[0]: " << arrayChar[0] << std::endl;
    std::cout << "arrayStrings[0]: " << arrayStrings[0] << std::endl;
    std::cout << std::endl;

    return 0;
}