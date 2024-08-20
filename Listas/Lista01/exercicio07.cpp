// exercicio07.cpp
/*
Aluno: Raisa Priscila da Silva - POO 4º Semestre

Escreva um programa para ler os valores de uma temperatura em graus Fahrenheit e
apresentala-la convertida para graus Kelvin. A fórmula de  conversão de graus Fahrenheit para
graus Kelvin é dada por K = (F - 32) x 5/9 + 273,15. Nessa fórmula, F corresponde à
temperatura em graus Fahrenheit e K corresponde à temperatura em graus Kelvin. Para
apresentar o resultado, considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>

int main(){
    float F, K;

    std::cout << "\nPrograma de conversão de Fahrenheit para Kelvin.\n\n";
    std::cout << "* Informe a temperatura em Fahrenheit: "; std::cin >> F;

    // Conversão Fahrenheit para Kelvin.
    K = (F - 32) * 5 / 9 + 273.15;

    // Apresentação em duas casas decimais.
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "A temperatura " << F << " °F convertido para Kelvin é: " << K << " K\n\n";

    return 0;
}