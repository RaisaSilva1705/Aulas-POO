// exercicio15.cpp
/*
Programa que demonstra a utilização de register
*/

#include <iostream>

int main(){
    // Declara a varipavel utilizando register
    register int i;

    std::cout << "\n";

    // Loop para demonstrar a utilização de register
    for (i = 0; i < 5; i++)
        std::cout << "Valor do contador: " << i << "\n";
    
    std::cout << "\n";

    return 0;
}