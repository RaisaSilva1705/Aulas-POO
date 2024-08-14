// referencia.cpp
/*
Passagem por referencia
*/

#include <iostream>

void incrementarPorReferencia(int &num){
    num++;
    std::cout << "Dentro da função: " << num << std::endl;
}

int main(){
    int a = 5;
    incrementarPorReferencia(a);
    std::cout << "Fora da função: " << a << std::endl;

    return 0;
}