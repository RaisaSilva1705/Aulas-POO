// exercicio10.cpp
/*
Escreva um programa para realizar a leitura de dois valores inteiros e armazená-los nas
variáveis A e B. Em seguida, efetuar a troca dos valores, de forma que a variável A passe a
possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar
os valores antes e depois da troca.
*/

#include <iostream>

int main(){
    int A, B, X;

    std::cout << "\nPrograma para troca de valores.\n\n";

    std::cout << "\n* Informe o valor da variavel A: "; std::cin >> A;
    std::cout << "\n* Informe o valor da variavel B: "; std::cin >> B;

    // Exibindo valores antes da troca
    std::cout << "\nValores ANTES da troca:\n";
    std::cout << "\nVariavel A: " << A;
    std::cout << "\nVariavel B: " << B;

    std::cout << std::endl;

    // Realizando a troca
    X = A;
    A = B;
    B = X;

    // Exibindo valores depois da troca
    std::cout << "\nValores DEPOIS da troca:\n";
    std::cout << "\nVariavel A: " << A;
    std::cout << "\nVariavel B: " << B;

    return 0;
}
