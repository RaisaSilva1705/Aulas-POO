// exercicio47.cpp
/*
Um número primo é aquele que é divisível somente por ele mesmo e por 1.
Escreva um programa que peça a entrada de um número inteiro e determine
se ele é ou não um número primo.
*/

#include <iostream>
#include <cmath>

int conferirPrimo(int n){
    for (int i = 2; i < sqrt(n); i++){
        if (n % i == 0)
            return false;
    }

    return true;
}

int main(){
    int n;

    std::cout << "\nNumero primo\n\n";

    std::cout << "* Informe um numero inteiro: "; std::cin >> n;

    if (conferirPrimo(n))
        std::cout << "\n\nO numero " << n << " é primo\n";
    else
        std::cout << "\n\nO numero " << n << " nao é primo\n";

    return 0;
}