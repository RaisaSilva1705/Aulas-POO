// exercicio08.cpp
/*
Escreva um programa para calcular e apresentar o valor do volume de uma lata de óleo.
O valor do volume pode ser obtido pela fórmula V = 3.141516 x R^2 x A, onde V corresponde
ao valor do volume, R corresponde ao valor do raio e A corresponde ao valor da altura.
O usuário deverá fornecer os valores do raio e da altura. Para apresentar o resultado,
considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    const float PI = 3.141516;
    float V, R, A;

    std::cout << "\n-- Programa para calculo do volume --";
    std::cout << "\n      -- de uma lata de óleo --      " << std::endl;

    // Inserindo os dados
    std::cout << "\n* Informe o valor do raio: "; std::cin >> R;
    std::cout << "\n* Informe a altura: "; std::cin >> A;

    // Cálculo do peso
    V = PI * pow(R, 2) * A;

    // Formatação
    std::cout << std::fixed << std::setprecision(2);

    // Exibição
    std::cout << "\n\nO volume da lata é de " << V;

    return 0;
}