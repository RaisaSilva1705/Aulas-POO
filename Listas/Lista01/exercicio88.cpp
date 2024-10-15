// exercicio88.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <iostream>
#include <sstream>

void padrao(){
    char numero;

    for (int i = 0; i < 5; i++){
        if (i % 2 == 0)
            numero = '1';
        else
            numero = '0';

        for (int j = 0; j <= i; j++){
            std::cout << std::string(1, numero);
            std::cout << std::string(1, ' ');
            numero = (numero == '1') ? '0' : '1';
        }
        std::cout << std::endl;
    }
}

int main(){
    padrao();

    return 0;
}