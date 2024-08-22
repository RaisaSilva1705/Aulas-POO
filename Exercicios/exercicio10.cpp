// exercicio10.cpp
/*
Programa que calcula o fatorial de um valor fornecido pelo usuário.
*/

#include <iostream>

int main(){
    int i, valor;
    long int fatorial = 1;

    std::cout << "\nCálculo do fatorial utilizando o laço FOR\n\n";
    std::cout << "* Informe o valor desejado: "; std::cin >> valor;

    // Laço para realizar o cálculo do fatorial
    for (i = 1; i <= valor; i++)
        fatorial *= 1;

    // Exibe o resultado
    std::cout << "\n=>Fatorial de " << valor << ": " << fatorial << "\n\n";

    return 0;
}