// valor.cpp
/*
Passagem por valor
*/

#include <iostream>

void incrementarPorValor(int num){
    num++;
    std::cout << "Dentro da função: " << num << std::endl;
}

int main(){
    int a = 5;
    incrementarPorValor(a);
    std::cout << "Fora da função: " << a << std::endl;

    return 0;
}