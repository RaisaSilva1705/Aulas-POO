// exercicio75.cpp
/*
Escreva um programa que possua uma função que receba um argumento do tipo inteiro
diferente de zero e retorne P, caso ele seja positivo, ou retorne N, caso ele seja negativo.
O programa deve solicitar a entrada desse argumento para o usuário e apresentar uma mensagem
com o valor retornado pela função.
*/

#include <iostream>

char conferirNumero(int N){
    if (N > 0)
        return 'P';
    else
        return 'N';
}

int main(){
    int N;

    do {
        std::cout << "\n*Informe um numero (diferente de zero): ";
        std::cin >> N;

        if (N == 0)
            std::cout << "\nO numero informado e zero. Por favor, informe outro numero.\n\n";
    } while (!(N != 0));
    

    std::cout << "\n\nPara o numero informado (" << N << "), a mensagem sera: " << conferirNumero(N) << std::endl;

    return 0;
}