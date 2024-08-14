// exercicio08.cpp
/*
Programa que calcula o fatorial de um valor fornecido pelo usuário.
*/

#include <iostream>

int main(){
    int i, valor;
    long int fatorial = 1;

    std::cout << "\nCálculo do fatorial utulizando o laço WHILE\n\n";
    std::cout << "* Informe o valor desejado: "; std::cin >> valor;

    // Laço para realizar o cálculo do fatorial
    i = 1;

    while (i <= valor){
        // Calcula o fatorial
        fatorial *= i;

        i++;
    }

    // Exibe o resultado
    std::cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    return 0;
}