// exercicio80.cpp
/*
Escreva um programa que utilize uma função que retorne o reverso de um número inteiro
passado como parâmetro. O programa deve solicitar a entrada desse número para o usuário
e exibir uma mensagem informando o seu valor reverso, conforme o seguinte exemplo:
1234 -> 4321.
*/

#include <iostream>

int reverso(int n){
    int reverso = 0, ultimoDigito;

    while (n > 0){
        ultimoDigito = n % 10;
        reverso = reverso * 10 + ultimoDigito;
        n /= 10;
    }

    return reverso;
}

int main(){
    int n;

    std::cout << "\n* Informe um numero inteiro: ";
    std::cin >> n;

    std::cout << n << " -> " << reverso(n) << std::endl;

    return 0;
}
