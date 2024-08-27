// exercicio11.cpp
/*
Escreva um programa que peça 2 números inteiros e um número real. Calcule e mostre:
    a. O produto do dobro do primeiro com metade do segundo;
    b. A soma do triplo do primeiro com o terceiro;
    c. O terceiro elevado ao cubo.
*/

#include <iostream>
#include <cmath>

int main(){
    int n1, n2;
    float n3, result;

    std::cout << "\n* Informe o numero inteiro 1: "; std::cin >> n1;
    std::cout << "\n* Informe o numero inteiro 2: "; std::cin >> n2;
    std::cout << "\n* Informe um numero real: "; std::cin >> n3;

    std::cout << "\n\nO produto do dobro do primeiro com metade do segundo:\n";
    result = (n1 * 2) * (n2 / 2);
    std::cout << result;

    std::cout << "\n\nA soma do triplo do primeiro com o terceiro:\n";
    result = (n1 * 3) + n3;
    std::cout << result;

    std::cout << "\n\nO terceiro elevado ao cubo:\n";
    result = pow(n3, 3);
    std::cout << result;

    return 0;
}