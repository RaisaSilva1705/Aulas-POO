// exercicio84.cpp
/*
Escreva um programa que utilize uma função que retorne a quantidade de dígitos de um
número inteiro passado como parâmetro. O programa deve solicitar a entrada desse número
para o usuário e exibir uma mensagem informando quantos dígitos ele possui.
*/

#include <iostream>

int quantDigitos(int n){
    if (n == 0) // se o número for igual a 0, retorna 1
        return 1;

    int cont = 0;

    while (n > 0){ // enquanto n for maior que 0
        n /= 10;   // tira um digito do final
        cont++;    // registra quantas vezes fez isso
    }

    return cont; // retorna a quantidade de vezes que fez o procedimento
}

int main(){
    int n;

    do{
        std::cout << "\n* Informe um numero inteiro positivo: ";
        std::cin >> n;

        if (n < 0)
            std::cout << "\nO numero informado e negativo. Por favor, informe um numero inteiro positivo.\n\n";

    } while (!(n >= 0));

    int quant = quantDigitos(n);

    std::cout << "\n\nA quantidade de digitos do numero " << n << " e: " << quant << "\n\n";

    return 0;
}
