// ponteiro.cpp
/*
Passagem por ponteiro
*/

#include <iostream>

void incrementarPorPonteiro(int *num){
    (*num)++;
    std::cout << "Dentro da função: " << *num << std::endl;
}

int main(){
    int a = 5;
    incrementarPorPonteiro(&a);
    std::cout << "Fora da função: " << a << std::endl;

    return 0;
}