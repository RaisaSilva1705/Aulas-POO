// ponteiroExemplo05.cpp
/*
Exemplo de uso de array nativo e ponteiro
*/

#include <iostream>

// Calcula a soma dos elementos do array
void soma(int *resultado, const int *arrayPtr, const size_t tamanho){
    // Loop para calcular a soma dos valores
    for (int i = 0; i < tamanho; i++)
        *resultado += *arrayPtr++;
}

// Função principal
int main(){
    std::cout << "\nExemplo de Array Nativo e Ponteiro\n\n";

    // Declara e inicializa um array de números inteiros
    int numeros[] = {1, 5, 2, 9, 6, 7, 1, 4, 2, 0};

    // Obtém o total de elementos do array
    size_t totalElementos = sizeof(numeros) / sizeof(numeros[0]);

    // Declara um ponteiro para tipos inteiros
    int *numerosPtr = nullptr;

    // Declara a variável que armazena a soma dos elementos do array
    int resultado = 0;

    // Exibe o total de elementos do array
    std::cout << "O array possui " << totalElementos << " elementos!\n\n";

    // Exibe os elementos do arrays
    std::cout << ">> Numeros: [";

    for (int i = 0; i < totalElementos; i++){
        if (i < totalElementos - 1)
            std::cout << numeros[i] << ", ";
        else
            std::cout << numeros[i] << "]";
    }

    // Aponta o ponteiro para o endereço do primerio elemento do array
    numerosPtr = &numeros[0];

    // Executa a função que calcula a soma dos elementos do array
    soma(&resultado, numerosPtr, totalElementos);

    // Exibe o resultado da soma dos elementos do array
    std::cout << "\n\n>> Soma: " << resultado << "\n\n";

    // Fim do programa
    return 0;
}