// exercicio14.cpp
/*
João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o
rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o
estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma
multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a
variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de
quilos além do limite e na variável multa o valor da multa que João deverá pagar. Imprima os
dados do programa com as mensagens adequadas.
*/

#include <iostream>

int main(){
    float peso, excesso, multa;

    std::cout << "\nInforme o peso do peixe: "; std::cin >> peso;

    if (peso > 50){
        // Cálculo do valor da multa
        excesso = peso - 50;
        multa = excesso * 4;

        // Exibindo o valor total da multa.
        std::cout << "\n\nO valor total da multa sera: " << multa;
    }
    else
        std::cout << "\n\nO peso informado esta abaixo de 50 quilos,\nLogo, nao sera cobrado multa";

    return 0;
}