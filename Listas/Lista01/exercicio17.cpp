// exercicio17.cpp
/*
Escreva um programa que peça a entrada de dois números inteiros e imprima o maior deles.
*/

#include <iostream>

int main(){
    int n1, n2;

    std::cout << "\n* Informe o primeiro numero inteiro: "; std::cin >>  n1;
    std::cout << "\n* Informe o segundo numero inteiro: "; std::cin >> n2;

    if (n1 > n2)
        std::cout << "\n\nO maior numero é " << n1;
    else if (n2 > n1)
        std::cout << "\n\nO maior numero é " << n2;
    else
        std::cout << "\n\nOs dois numeros sao iguais.";

    return 0;
}