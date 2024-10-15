// exemplo08.cpp
/*
Programa que demonstra o uso de argumentos na função principal
*/

#include <iostream>

// Função principal
int main(int argc, char* argv[]){
    std::cout << "\nExemplo de Argumentos da Função Principal\n\n";

    // Exibe o número de argumentos passados para a função
    std::cout << "Número de argumentos: " << argc << "\n\n";

    // Loop para exibir os argumentos passados para a função
    for (int i = 0; i < argc; i++){
        std::cout << "Argumento " << i << ": " << argv[i] << "\n";
    }

    std::cout << std::endl;

    // Fim do programa
    return 0;
}