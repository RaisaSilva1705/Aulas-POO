// exemplo15string.cpp
/*
Exemplo de uso de strtok e de alocação dinâmica
*/

#include <iostream>
#include <cstring>

int main(){
    std::cout << "\nExemplo de uso de strtok() e de Alocação Dinâmica\n\n";

    // Array com o texto desejado
    char texto[] = "Minha-frase-de-token";

    // Caractere de verificação
    char separador[] = "-";

    // Tamanho inicial do array do tokens
    int capacidade = 2;

    // Array de ponteiros, utilizando para armazenar os tokens
    char **tokens = nullptr;

    // Inicialmente, aloca espaço para 2 tokens
    tokens = new char*[capacidade];

    // Ponteiro para o token
    char *tokenPtr;

    // Contadores
    int i, total;

    // ------------------------------------

    // Exibe o texto inicial
    std::cout << "* Texto inicial: " << texto << "\n\n";

    // Retorna o primeiro token
    tokenPtr = strtok(texto, separador);

    // Inicializa o contadir de tokens
    total = 0;

    // Loop para obter os tokens até que o ponteiro <tokenPtr> seja NULL
    while (tokenPtr != NULL){
        // Se chegou no limite do array que armazena os tokens
        if (total >= capacidade){
            // Duplica o tamanho do array de tokens
            capacidade *= 2;

            // Criar e aloca a memória para um array temporário
            char **temp = new char*[capacidade];

            // Copia os ponteiros antigos para o array temporário
            for (i = 0; i < total; i++)
                temp[i] = tokens[i];

            // Libera a memória antiga
            delete[] tokens;

            // Aponta o array de tokens para o array temporário
            tokens = temp;
        }

        // Armazena o token no array de tokens
        tokens[total] = tokenPtr;

        // Incrementa o contador do array de tokens
        total++;

        // Obtém o próximo token
        tokenPtr = strtok(NULL, separador);
    }

    std::cout << "* Foram gerados " << total << " tokens: \n\n";

    // Exibe os tokens que foram gerados
    for (i = 0; i < total; i++)
        std::cout << i + 1 << ". -> " << tokens[i] << std::endl;
    
    std::cout << "\n";

    return 0;
}