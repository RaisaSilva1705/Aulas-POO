// ponteiroExemplo01.cpp
/*
Programa que demonstra como declarar uma variável ponteiro
*/

#include <iostream>

int main(){
    std::cout << "\nDeclaração de Variável Ponteiro\n\n";

    // Declara e inicializa uma variável inteira
    int idade = 25;

    // Declara um ponteiro que aponta para a variável <idade>
    int *idadePtr = &idade;

    // Exibe os valores
    std::cout << "1. Valor da variavel <idade>: " << idade << std::endl;
    std::cout << "1. Endereco da variavel <idade>: " << &idade << std::endl;
    std::cout << "2. Valor da variavel <idadePtr>: " << idadePtr << std::endl;
    std::cout << "2. Valor apontado pela variavel <*idadePrt>: " << *idadePtr << std::endl;

    // Fim do programa
    return 0;
}