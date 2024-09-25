// exercicio16.cpp
/*
Programa que demonstra a utilização de namespaces.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

namespace estatistico {
    // Variável que armazena o valor de PI
    double PI = 3.141516;

    // Cálculo de média
    double media(const std::vector<double>& dados){
        // Variável para armazenar a soma dos valores do vetor
        double soma = 0;

        // Calcula a soma dos valores do vetor
        for (auto valor : dados)
            soma += valor;
        
        // Retorna o valor da média
        return soma / dados.size();
    }

    // Cálculo da mediana
    double mediana(std::vector<double> dados){
        // Ordena os valores do vetor
        std::sort(dados.begin(), dados.end());

        // Calcula o tamanho do vetor
        std::size_t size = dados.size();

        // Retorna o valor da mediana
        if (size % 2 == 0)
            return (dados[size / 2 - 1] + dados[size / 2]) / 2;
        else
            return dados[size / 2];
    }

    // Cálculo da variância
    double variancia(const std::vector<double>& dados){
        // Calcula a média dos valores do vetor
        double m = media(dados);

        // Variável para armazenar a soma dos valores do vetor
        double soma = 0;

        // Calcula a soma dos quadrados da diferença entre o valor e sua média
        for (auto valor : dados)
            soma += (valor - m) * (valor - m);

        // Retorna a variância dos dados
        return soma / dados.size();
    }

    // Cálculo do desvio padrão
    double desvioPadrao(const std::vector<double>& dados){
        // Retorna o desvio padrão dos dados
        return sqrt(variancia(dados));
    }
}

// Função principal
int main(){
    // Define o vetor com os dados
    std::vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    // Cabeçalho
    std::cout << "\nExemplo de utilização de namespaces\n\n";

    // Formatação
    std::cout << std::setprecision(2);
    std::cout << std::setiosflags(std::ios::fixed);

    // Utiliza o namespace para calcular o resultado
    std::cout << "Valor de PI..: " << estatistico::PI << std::endl;
    std::cout << "Media........: " << estatistico::media << std::endl;
    std::cout << "Mediana......: " << estatistico::mediana << std::endl;
    std::cout << "Variancia....: " << estatistico::variancia << std::endl;
    std::cout << "Desvio Padrao: " << estatistico::desvioPadrao << std::endl;
    std::cout << "\n\n";

    return 0;
}