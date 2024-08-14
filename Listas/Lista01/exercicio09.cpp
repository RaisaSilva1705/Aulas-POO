// exercicio09.cpp
/*
Considere o seguinte cenário: "Em um jogo para duas ou mais pessoas, existem
X peças quadradas e Y peças triangulares. Sabendo que, para jogar esse jogo,
as peças precisam ser igualmente distribuídas e não pode sobrar nenhuma delas,
qual é o máximo de participantes possíveis no jogo?"
Escreva um programa para resolver este problema.
*/

#include <iostream>

int main(){
    int quadradas, triangulares, a, b, r;

    // Entrada dos dados
    std::cout << "\nCálculo do número máximo de participantes de um jogo\n\n";
    std::cout << "* Informe o total de peças quadradas: "; std::cin >> quadradas;
    std::cout << "* Informe o total de peças triangulares: "; std::cin >> triangulares;

    // Calcula o MDC utilizando o algoritmo de Euclides
    a = quadradas;
    b = triangulares;

    do {
        r = a % b;
        a = b;
        b = r;
    } while (b != 0);

    // Exibe o resultado
    std::cout << "\n=> Considerando " << quadradas << " peças quadradas e\n";
    std::cout << triangulares << " peças triangulares, devemos ter no máximo\n";
    std::cout << a << " participantes.\n\n";

    return 0;
}