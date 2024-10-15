// exercicio89.cpp
/*
Escreva um programa que possua uma função que receba três valores inteiros e retorne a 
sua soma. O programa deve solicitar a entrada desses valores para o usuário e apresentar
uma mensagem com o valor retornado pela função.
*/

#include <iostream>

int soma(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(){
    int n1, n2, n3;

    std::cout << "\nPrograma de soma de três valores!\n\n";

    std::cout << "* Informe o primeiro numero inteiro: "; std::cin >> n1;
    std::cout << std::endl;
    std::cout << "* Informe o segundo numero inteiro: "; std::cin >> n2;
    std::cout << std::endl;
    std::cout << "* Informe o terceiro numero inteiro: "; std::cin >> n3;
    std::cout << std::endl;

    std::cout << ">> A soma dos tres valores informados e igual a: " << soma(n1, n2, n3) << std::endl;

    return 0;
}