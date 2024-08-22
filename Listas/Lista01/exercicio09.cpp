// exercicio09.cpp
/*
Escreva um programa para calcular e apresentar o valor do peso de uma esfera. O valor do
peso pode ser obtido pela fórmula P = (D / 3) x 4 x 3.141516 x R^3, onde P representa
o valor do peso, D representa o valor da densidade e R reporesenta o valor do raio.
O usuário deverá fornecer os valores da densidade e do raio. Para apresentar o resultado,
considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    const float PI = 3.141516;
    float P, D, R;

    std::cout << "\n-- Programa para calculo do peso --";
    std::cout << "\n        -- de uma esfera --        " << std::endl;

    // Inserindo os dados
    std::cout << "\n* Informe o valor do raio: "; std::cin >> R;
    std::cout << "\n* Informe a densidade: "; std::cin >> D;

    // Cálculo do volume
    P = (D / 3) * 4 * PI * pow(R,3);

    // Formatação
    std::cout << std::fixed << std::setprecision(2);

    // Exibição
    std::cout << "\n\nO peso da esfera é de " << P;

    return 0;
}