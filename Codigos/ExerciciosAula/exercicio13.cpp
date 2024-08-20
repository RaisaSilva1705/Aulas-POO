// exercicio13.cpp
/*
Programa que demonstra a utilização de sobrecarga de funções.
*/

#include <iostream>

// Protótipos de função
void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float N2);

// Função principal
int main(){
    std::cout << "\n";

    // Utiliza as funções sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    std::cout << "\n";

    return 0;
}

// DEFINIÇÕES DAS FUNÇÕES

// Função sobrecarregada sem parâmetros
void imprime(){
    std::cout << "Funcao sem argumentos.\n"; 
}

// Função sibrecarregada, com um parâmetro inteiro
void imprime(int valor){
    std::cout << "Funcao com argumento inteiro: " << valor << std::endl;
}

// Função sibrecarregada, com um parâmetro real
void imprime(float valor){
    std::cout << "Funcao com argumento real: " << valor << std::endl;
}

// Função sobrecarregada, com dois parâmetros
void imprime(int N1, float N2){
    std::cout << "Primeiro valor: " << N1 << std::endl;
    std::cout << "Segundo valor: " << N2 << std::endl;
}