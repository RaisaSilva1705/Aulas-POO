// exercicio13.cpp
/*
Escreva um programa para uma loja de tintas. O programa deverá pedir o tamanho em
metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para
cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
Informe ao usuário a quantidade de latas de tinta que deve ser comprada e o preço total que
deverá ser pago. Para apresentar o resultado considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

#define COBERTURA 3
#define LITRO_LATA 18
#define PRECO_LATA 80

int main(){
    float area, lNecessarios, quantLatas, valorTotal;

    std::cout << "\nPrograma para calculo de valor\nde tinta por área a ser pintada\n\n";
    std::cout << "* Informe o tamanho em metros quadrados: "; std::cin >> area;

    // Calcula a quantidade de litros de tinta necessárias
    lNecessarios = area / COBERTURA;

    // Calcula a quantidade de latas e o preço total
    quantLatas = std::ceil(lNecessarios / LITRO_LATA);
    valorTotal = quantLatas * PRECO_LATA;

    // Formatação
    std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed);

    // Exibir o resultado
    std::cout << "\n\nO valor total a ser pago sera " << valorTotal;
    std::cout << "\nQuantidade de latas: " << quantLatas;

    return 0;
}