// exemplo01struct
/*
Programa que demonstra como declarar uma estrutura
*/

#include <iostream>

// Definição da estrutura Ponto
// Ela é utilizada para armazenar pontos de uma coordenada
struct Ponto {
    int x;
    int y;
};

// Função principal
int main(){
    std::cout << "\nDeclaracao de Estruturas\n\n";

    // Declaração de duas variáveis do tipo Ponto
    Ponto p1;
    Ponto p2;

    // Atribuição de valores aos membros da primeira estrutura
    p1.x = 10;
    p1.y = 20;

    // Atribuição de valores aos membros da segunda estrutura
    p2.x = 0;
    p2.y = 100;

    // Acesso aos membros das estruturas
    std::cout << "Coordenadas do ponto P1: (" << p1.x << ", " << p1.y << ")\n";
    std::cout << "Coordenadas do ponto P2: (" << p2.x << ", " << p2.y << ")\n";

    // Fim do programa
    return 0;
}