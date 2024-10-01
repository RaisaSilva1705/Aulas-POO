// exercicio83.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *   
*/

#include <iostream>
#include <sstream>

void padrao(){
    for (int i = 0; i < 10; i += 2){
        std::cout << std::string(i, ' ');

        int j = 9-i;
        while (j > 0){
            std::cout << "* ";
            j--;
        }

        std::cout << std::endl;
    }
}

int main(){
    padrao();

    return 0;
}
