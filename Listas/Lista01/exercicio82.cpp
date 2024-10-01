// exercicio82.cpp
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
        std::cout << std::string(4-(i), ' ');

        int j = i+1;
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
