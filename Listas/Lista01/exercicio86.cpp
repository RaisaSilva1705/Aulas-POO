// exercicio86.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <iostream>
#include <sstream>

void padrao(){
    for (int i = 1; i <= 9; i++){
        if (i <= 5){
            std::cout << std::string(i, '*');
            std::cout << std::endl;
        }
        else{
            std::cout << std::string(10-i, '*');
            std::cout << std::endl;
        }
    }
}

int main(){
    padrao();

    return 0;
}