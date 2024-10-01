// exercicio74.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

*
* *
* * *
* * * *
* * * * *
*/

#include <iostream>
#include <sstream>

void padrao(){
    for (int i = 0; i < 5; i++){
        std::cout << std::string(i+1, '*') << std::endl;
    }
}

int main(){
    padrao();

    return 0;
}
