// exercicio14.cpp
/*
Programa que demonstra a utilização de static.
*/

#include <iostream>

// Função que retorna o incremento de um valor
void incremento(){
    // Definição da variável estática
    static int valor = 0;

    // Exibe seu valor
    std::cout << valor << "\n";

    // incrementa o valor da variável
    valor += 5;
}

// Função principal
int main (){
    std::cout << "\n";

    // Loop para demonstrar a utilização de static
    for (int i = 0; i < 5; i++){
        std::cout << "i: " << i << " -- valor: ";
        incremento();
    }

    std::cout << "\n";

    return 0;
}