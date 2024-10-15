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
    int espaco = 0;

    for (int i = 1; i <= 9; i++){
        if (i <= 5){
            std::cout << std::string(4 - (espaco), ' ') << std::string(i, '*');
            std::cout << std::endl;
            espaco++;
        }
        else{
            espaco--;
            std::cout << std::string(5 - (espaco), ' ') << std::string(10-i, '*');
            std::cout << std::endl;
        }
    }
}

int main(){
    padrao();

    return 0;
}