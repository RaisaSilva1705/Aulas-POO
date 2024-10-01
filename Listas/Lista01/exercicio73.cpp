// exercicio73.cpp
/*
Escreva um programa que solocite a entrada de um inteiro N e utilize uma função para
exibir o seguinte padrão:

1
1 2
1 2 3
...
1 2 3 ... N
*/

#include <iostream>
#include <sstream>

void padrao(int N) {
    std::cout << std::endl;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++) {
            // Converte o número j para string
            std::string numString = std::to_string(j+1);

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
