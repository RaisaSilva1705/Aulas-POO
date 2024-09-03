// exercicio18.cpp
/*
Escreva um programa que peça a entrada de um valor inteiro e mostre na tela se esse valor
é positivo ou negativo.
*/

#include <iostream>

int main(){
    int n;

    std::cout << "\n* Informe um numero: "; std::cin >> n;

    if (n >= 0)
        std::cout << "\n\nO numero " << n << " é positivo.";
    else
        std::cout << "\n\nO numero " << n << " é negativo.";

    return 0;    
}