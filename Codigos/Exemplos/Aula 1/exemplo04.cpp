// exemplo04.cpp
/*
Demonstra como ordenar um array de strings utilizando o Quick Sort
*/

#include <iostream>
#include <iomanip>
#include <string>

// Total de nomes
#define TAM 10

// FUNÇÃO PARA TROCAR O VALOR DE DUAS STRINGS
void trocar(std::string& a, std::string& b){
    std::string temp = a;
    a = b;
    b = temp;
}

// FUNÇÃO DE PARTIÇÃO, QUE COLOCA O PIVÔ NO LUGAR CORRETO E ORGANIZA OS
// ELEMENTOS MENORES QUE O PIVÔ À ESQUERDA E OS MAIORES À DIREITA
int particao(std::string dados[], int menor, int maior){
    // Escolhe o último elemento para ser o pivô
    std::string pivo = dados[maior];

    // Índice do último elemento cujo valor é menor do que o pivô
    int i = menor - 1;

    // Loop para organizar os elementos em relação ao pivô
    for (int j = menor; j < maior; j++){
        // Move todos os elementos menores que o pivô para a
        // parte esqueda do array de strings
        if (dados[j] < pivo){
            i++;
            trocar(dados[i], dados[j]);
        }
    }

    // Depois que o loop termina, todos os elementos menores que o
    // pivô estão à esquerda e todos os elementos maiores estão à direita
    // Porém, o pivô ainda está na última posição (maior).
    // Assim, trocamos o pivô com o elemento na posição i + 1,
    // para colocá-lo na posição correta.
    trocar(dados[i + 1], dados[maior]);

    // Retorna o índice do pivô, em sua posição correta dentro do array
    return i + 1;
}

// FUNÇÃO QUICK SORT
void quickSort(std::string dados[], int menor, int maior){
    // Verifica se o array possui ao menos um elemento
    if (menor < maior){
        // Divide o array de strings em dois e retorna o índice da partição
        int pivo = particao(dados, menor, maior);

        // Ordena os elementos dentro dos arrays antes e depois da partição
        quickSort(dados, menor, pivo - 1);
        quickSort(dados, pivo + 1, maior);
    }
}

// FUNÇÃO PRINCIPAL
int main(){
    std::cout << "\nExemplo: Quick Sort\n\n";

    // Declara um array para armazenar os nomes
    std::string nomes[TAM];
    
    // Loop que realiza a entrada dos nomes
    for (int i = 0; i < TAM; i++){
        std::cout << "* Informe o nome " << i + 1 << ": ";
        getline(std::cin, nomes[i]);
    }

    // Imprimindo os nomes antes da ordenação
    std::cout << "\nNomes antes da ordenacao:\n\n";

    int i = 1;
    for (const auto& nome : nomes){
        std::cout << std::setw(2) << i << "." << nome << std::endl;
        i++;
    }

    // Ordena os nomes utilizando o Quick Sort
    quickSort(nomes, 0, TAM - 1);

    // Imprimindo os nomes depois da ordenação
    std::cout << "\nNomes depois da ordenacao:\n\n";

    i = 1;
    for (const auto& nome : nomes){
        std::cout << std::setw(2) << i << "." << nome << std::endl;
        i++;
    }

    std::cout << "\n";

    return 0;
}