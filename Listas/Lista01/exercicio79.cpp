// exercicio79.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

*****
 ****
  ***
   **
    *
*/

#include <iostream>
#include <sstream>

void padrao(){
    for (int i = 0; i < 5; i++){
        std::cout << std::string(i, ' ') << std::string(5-i, '*') << std::endl;
    }
}

int main(){
    padrao();

    return 0;
}
