// prova01.cpp
/*
Escreva um programa que receba um conjunto de valores inteiros. Em seguida, exiba um
gráfico de barras horizontal, simulando o histograma referente aos valores que foram 
informados. O programa deve exibir o resultado conforme o exemplo abaixo:
*/

#include <iostream>

int main(){
    int linhas = 0;
    int colunas = 0;

    std::cout << "\n* Informe quantos dados quer colocar: ";
    std::cin >> linhas;

    int *numeros = new int[linhas];

    for (int i = 0; i < linhas; i++){
        std::cout << "\n>> Informe o dado n. " << i+1 << ": ";
        std::cin >> numeros[i];
        if (numeros[i] > colunas)
            colunas = numeros[i];
    }

    std::cout << "\n* Total de linhas: " << linhas;
    std::cout << "\n* Total de colunas: " << colunas;

    std::cout << "\n\n";

    std::cout << "Histograma Horizontal\n\n";

    for (int i = 0; i < linhas; i++){
        std::cout << i+1 << "| ";

        int count = 0;
        while (count < numeros[i]){
            std::cout << std::string(1, '*');
            std::cout << std::string(1, ' ');
            count++;
        }

        std::cout << std::endl;
        
        if (i == linhas - 1){
            std::cout << " + ";

            count = 0;
            while (count < colunas){
                std::cout << std::string(1, '-');
                std::cout << std::string(1, ' ');
                count++;
            }

            std::cout << std::endl;

            std::cout << " ";
            for (int j = 0; j <= colunas; j++){
                std::cout << j << " ";
            }
        }
    }

    std::cout << "\n\n";
    std::cout << ">> Fim: Prova P1";
    std::cout << "\n\n";

    // Libera a memória que foi alocada
    delete[] numeros;

    return 0;
}