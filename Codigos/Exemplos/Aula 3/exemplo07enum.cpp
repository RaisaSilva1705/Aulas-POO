// exemplo07enum.cpp
/*
Programa para demonstrar o uso de enumerações com escopo
*/

#include <iostream>

// Enumeração para contorlar o estado de um jogo
enum class EstadoJogo{
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

// Função para exibir o estado do jogo
void mostrarEstado(EstadoJogo estado){
    switch (estado){
    case EstadoJogo::MenuPrincipal:
        std::cout << ">> Você está no Menu Principal.\n";
        break;
    case EstadoJogo::Jogando:
        std::cout << ">> O jogo está em andamento.\n";
        break;
    case EstadoJogo::Pausado:
        std::cout << ">> O jogo está pausado.\n";
        break;
    case EstadoJogo::GameOver:
        std::cout << ">> Game Over!\n";
        break;
    default:
        std::cout << ">> Estado desconhecido.\n";
        break;
    }
} 

// Função principal
int main(){
    std::cout << "\n* Exemplo de Enumeracoes\n\n";

    // Declara o enumerador, indicando que o jogo está no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    // Mostra o estado inicial do jogo
    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------

    // Simula o início do Jogo
    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------

    // Simula um pause no Jogo
    estadoAtual = EstadoJogo::Pausado;

    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------

    // Simula game over
    estadoAtual = EstadoJogo::GameOver;

    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------

    std::cout << std::endl;

    // Fim do programa
    return 0;
}