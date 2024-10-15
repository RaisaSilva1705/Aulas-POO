// exemplo09.cpp
/*
Programa que demonstra o uso de argumentos na função principal
*/

#include <iostream>
#include <cstring>
#include <cstdlib>

// Função principal
int main(int argc, char* argv[]){
    std::cout << "\nExemplo de Argumentos da Função Principal\n\n";

    // Se o usuário não forneceu o número correto de argumentos
    if (argc != 4){
        // Exibe uma mensagem de erro
        std::cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2\n\n";

        // Encerra o programa
        return 1;
    }

    // Recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Realiza a soma dos valores
    if (!strcmp(operacao, "somar"))
        std::cout << "Soma: " << num1 + num2 << std::endl;
    else if (!strcmp(operacao, "subtrair"))
        std::cout << "Subtração: " << num1 - num2 << std::endl;
    else
        std::cout << "Operação inválida!\n";

    std::cout << std::endl;

    // Fim do programa
    return 0;
}