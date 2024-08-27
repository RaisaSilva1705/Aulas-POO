// exemplo02.cpp
/*
Exemplo de array bidimensional: Programa que demonstra como utilizar
uma matriz para a entrada de notas
*/

#include <iostream>
#include <iomanip>

// Total de linhas e colunas
#define LINHAS 10
#define COLUNAS 4

int main(){
    std::cout << "\nExemplo de Array Bidimensional\n\n";

    // Declara as variáveis para controle dos laços
    int i, j;

    // Declara a matriz para entrada das notas
    // e da média do aluno
    float notas[LINHAS][COLUNAS + 1];

    // Declara as variáveis para cálculo de média do aluno
    float soma, media;

    // Entrada das notas

    std::cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos:\n\n";

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++){
        std::cout << "Informe as notas do aluno " << i+1 << ": ";

        // Loop para a entrada das notas
        for (j = 0; j < COLUNAS; j++){
            // Armazena a nota
            std::cin >> notas[i][j];
        }
    }

    // Cálculo da média

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++){
        // Inicializa o somatório das notas do aluno
        soma = 0;

        // Loop para percorrer cada nota
        for (j = 0; j < COLUNAS; j++){
            // Atualiza o somatório das notas
            soma += notas[i][j];
        }

        // Calcula e armazena a média do aluno
        notas[i][COLUNAS] = soma / COLUNAS;
    }

    // Apresentação do resultado

    // Formatação do resultado
    std::cout << std::setprecision(2);
    std::cout << std::setiosflags(std::ios::fixed);

    std::cout << "\n* Resultado final: \n\n";

    // Cabeçalho
    std::cout << std::setw(6) << "Aluno";

    for (j = 0; j < COLUNAS; j++)
        std::cout << std::setw(9) << "Nota " << j+1;
    
    std::cout << std::setw(10) << "Média";
    std::cout << "\n\n";

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; i++){
        // Número do aluno
        std::cout << std::setw(6) << i+1;

        // Loop para exibir as notas
        for (j = 0; j < COLUNAS; j++){
            // Notas do aluno
            std::cout << std::setw(10) << notas[i][j];
        }

        // Média do aluno
        std::cout << std::setw(9) << notas[i][COLUNAS];

        // Passa para a próximo linha da tabela
        std::cout << "\n";
    }

    std::cout << "\n";

    // Fim do programa
    return 0;
}