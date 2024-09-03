// exercicio20.cpp
/*
Escreva um programa que peça a entrada de três números inteiros e mostre-os
em ordem decrescente.
*/

#include <iostream>

int main(){
    int n1, n2, n3, x;

    // Solicita a entrada de três números inteiros
    std::cout << "Digite o primeiro numero: "; std::cin >> n1;
    std::cout << "Digite o segundo numero: "; std::cin >> n2;
    std::cout << "Digite o terceiro numero: "; std::cin >> n3;

    // Ordenação manual
    if (n1 < n2){
        x = n1;
        n1 = n2;
        n2 = x;
    }
    if (n1 < n3){
        x = n1;
        n1 = n3;
        n3 = x;
    }
    if (n2 < n3){
        x = n2;
        n2 = n3;
        n3 = x;
    }

    // Exibir resultado
    std::cout << "\n\nOs numeros em ordem decrescente ficaria:\n";
    std::cout << n1 << ", " << n2 << ", " << n3 << std::endl;

    return 0;
}