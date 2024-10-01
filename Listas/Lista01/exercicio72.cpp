// exercicio72.cpp
/*
Escreva um programa que solocite a entrada de um inteiro N e utilize uma função para
exibir o seguinte padrão:

1
2 2
3 3 3
...
N N N N N N ... N
*/

#include <iostream>
#include <sstream>

void padrao(int N) {
    std::cout << std::endl;

    for (int i = 0; i < N; i++){
        // Converte o número i para string
        std::string numString = std::to_string(i+1);

        // Concatena a string do número i repetidamente
        for (int j = 0; j < i+1; j++) {
            std::cout << numString << " ";
        }
        std::cout << std::endl;
    }
}

int main(){
    int N;

    std::cout << "\n* Informe um número inteiro: ";
    std::cin >> N;

    padrao(N);

    return 0;
}
