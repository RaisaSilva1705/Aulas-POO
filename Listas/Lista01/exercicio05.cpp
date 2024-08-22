// exercicio05.cpp
/*
Escreva um programa para ler os valores de uma temperatura em graus Celsius e apresentá-la
convertida para graus Fahrenheit e graus Kelvin. A fórmula de conversão para graus Fahrenheit
é dada por F = (9 x C + 160)/5. A fórmula de conversão para graus Kelvin é dada por
K = C + 273,15. Nessas fórmulas, F corresponde à temperatura em graus Fahrenheit, K
corresponde à temperatura em Kelvin e C corresponde à temperatura em graus Celsius.
Para apresentar o resultado, considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>

int main(){
    float C, K, F;

    std::cout << "\n-- Programa de conversão de Celsius para Kelvin e Fahrenheit --\n";
    std::cout << "\n* Informe o valor em Celsius: "; std::cin >> C;

    // Conversão para Kelvin e Fahrenheit
    K = C + 273.15;
    F = (9 * C + 160)/5;

    // Formatação
    std::cout << std::fixed << std::setprecision(2);

    // Exibição
    std::cout << "\n\nO valor " << C << " em graus Celsius é igual a ";
    std::cout << F << " em graus Fahrenheit e a " << K << " em Kelvin\n";

    return 0;
}