// Funcao01.cpp

#include <iostream>

// Definição da função
int soma(int a, int b = 0){
    return a + b;
}

int main(){
    int resultado = soma(5, 3);
    std::cout << "A soma é: " << resultado << std::endl;

    return 0;
}