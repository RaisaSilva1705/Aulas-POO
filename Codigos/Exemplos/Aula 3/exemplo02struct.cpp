// exemplo02struct.cpp
/*
Programa que demonstra como declarar uma estrutura com funções
*/

#include <iostream>

// Definição da estrutura Ponto
struct Ponto {
    // Coordenadas do ponto
    int x;
    int y;

    // Função para definir as coordenadas do ponto
    void defineCoordenadas(int px, int py){
        x = px;
        y = py;
    }

    // Função para exibir as coordenadas do ponto
    // O modificador const indica que ela não modifica os membros da estrutura
    void exibeCoordenadas(std::string P) const{
        std::cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n\n";
    }
};

// Função principal
int main(){
    std::cout << "\nDeclaracao de Estrutura com Atributos e Funcoes\n\n";

    // Declaração de uma variável do tipo Ponto
    Ponto p1;

    // Executa a função que define as coordenadas do ponto
    p1.defineCoordenadas(10, 20);

    // Executa a função que exibe as coordenadas do ponto
    p1.exibeCoordenadas("P1");

    // Fim do programa
    return 0;
}