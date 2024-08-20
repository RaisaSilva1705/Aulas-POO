// exercicio11.cpp
/*
Programa que utiliza funções para implementar uma calculadora simples.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

float N1, N2, resultado;

// Protótipos de função
void entrada();
void saida(std::string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

int main(){
    int opcao = 0;

    while (opcao != 5){
        // Formatação
        std::cout << std::setprecision(2);
        std::cout << std::setiosflags(std::ios::right);
        std::cout << std::setiosflags(std::ios::fixed);

        // Cabeçalho
        std::cout << "\n----------------------" << std::endl;
        std::cout << " Programa Calculadora " << std::endl;
        std::cout << "----------------------\n" << std::endl;

        // Opções do menu
        std::cout << "[1] - Adicao\n[2] - Subtracao\n";
        std::cout << "[3] - Multiplicacao\n[4]Divisao\n";
        std::cout << "[5] - Encerrar o programa\n\n";

        // Entrada do usuário
        std::cout << "=> Escolha uma opcao: "; std::cin >> opcao;

        switch (opcao){
            // Adição
            case 1:
                adicao();
                break;
            // Subtração
            case 2:
                subtracao();
                break;
            // Multiplicação
            case 3:
                multiplicacao();
                break;
            // Divisão
            case 4:
                divisao();
                break;
            // Encerrar o programa
            case 5:
                std::cout << "\nPrograma encerrado com sucesso!\n\n";
                break;
            default:
                std::cout << "\nEssa opcao nao e valida, tente novamente.\n\n";
        }
    }

    return 0;
}

// DEFINIÇÕES DAS FUNÇÕES

// realiza a entrada dos números que serão utilizados para realizar a operação
void entrada(){
    std::cout << "\n* Informe o primeiro numero: "; std::cin >> N1;
    std::cout << "\n* Informe o segundo numero: "; std::cin >> N2;
}

// Exibe o resultado da operação
void saida(std::string operacao){
    std::cout << "\n=> O resultado da " << operacao;
    std::cout << "entre " << N1 << " e " << N2;
    std::cout << " é " << resultado << "!\n\n";

    // Simula uma pausa no programa
    pausa();
}

// Simula uma pausa na execução do programa
void pausa(){
    char letra;

    std::cout << "\nTecle <C> + <Enter> para voltar ao menu: ";

    // Laço para receber a entrada do usuário
    do {
        // Obtém a entrada do usuário
        letra = std::cin.get();

        // Converte para letras maiúsculas
        letra = std::toupper(letra);
    } while (letra != 'C');
}

// Realiza a operação de adição
void adicao(){
    // Cabeçalho
    std::cout << "\n Rotina de Adicao" << std::endl;
    std::cout << "------------------" << std::endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a adição
    resultado = N1 + N2;

    // Executa a função para exibir o resultado
    saida("adicao");
}

// Realiza a operação de subtração
void subtracao(){
    // Cabeçalho
    std::cout << "\n Rotina de Subtracao" << std::endl;
    std::cout << "------------------" << std::endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a subtração
    resultado = N1 - N2;

    // Executa a função para exibir o resultado
    saida("subtracao");
}

// Realiza a operação de multiplicação
void multiplicacao(){
    // Cabeçalho
    std::cout << "\n Rotina de Multiplicacao" << std::endl;
    std::cout << "------------------" << std::endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a multiplicação
    resultado = N1 * N2;

    // Executa a função para exibir o resultado
    saida("multiplicacao");
}

// Realiza a operação de divisão
void divisao(){
    // Cabeçalho
    std::cout << "\n Rotina de Divisao" << std::endl;
    std::cout << "------------------" << std::endl;

    // Executa a função para obter os dados
    entrada();

    // Verifica se não está ocorrendo uma divisão por zero
    if (N2 == 0){
        std::cout << "\nErro de divisao\n";

        // Simula uma pausa no programa
        pausa();
    }
    else { // Caso contrário calcula a divisão
        resultado = N1 / N2;

        // Executa a função para exibir o resultado
        saida("divisao");
    }
}