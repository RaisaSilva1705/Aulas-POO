// exercicio88.cpp
/*
Escreva um programa que utilize uma função para exibir o seguinte padrão:

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <iostream>
#include <sstream>

void padrao(){
    int espaco = 4;

    for (int i = 1; i < 18; i +=2 ){ // 1, 3, 5 ,7, 9, 11, 13, 15, 17
        if (i <= 9){
            std::cout << std::string(espaco*2, ' ');

            int j = 0;
            while (j < i){
                std::cout << std::string(1, '*');
                std::cout << std::string(1, ' ');
                j++;
            }
            std::cout << std::endl;
            espaco--;
        }
        else {
            if (espaco < 0){espaco = 0;}

            espaco++;

            std::cout << std::string(espaco * 2, ' ');

            int j = i - 18; // 11, 13, 15, 17
            while (j < 0){ // 7, 5, 3, 1
                std::cout << std::string(1, '*');
                std::cout << std::string(1, ' ');
                j++;
            }
            std::cout << std::endl;
        }

    }
}

int main(){
    padrao();

    return 0;
}
