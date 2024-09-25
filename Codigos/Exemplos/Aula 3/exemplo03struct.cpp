// exemplo03struct.cpp
/*
Programa para armazenar notas de alunos
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>    // Permite o uso de vector
#include <algorithm> // Permite o uso da função sort()
#include <sstream>   // Manipulador de cadeias de caracteres

// ------------- ESTRUTURA -------------
// Estrutura para cadastrar os dados dos alunos
struct Cadastro {
    std::string nome;
    std::vector<float> notas; // Vetor para armazenar as notas
    float media;
};

// ------------- FUNÇÕES -------------
// Função para calcular a média das notas do aluno
float calcularMedia(const std::vector<float> &notas){
    float soma = 0.0f;

    // Loop que percorre as notas do aluno
    for (float nota : notas)
        soma += nota;

    return soma / notas.size(); // Retorna a média do aluno
}

// Função de comparação, para ordenar duas estruturas pelo atributo nome
bool compararNomes(const Cadastro &a, const Cadastro &b){
    return a.nome < b.nome;
}

// ------------- FUNÇÃO PRINCIPAL -------------
int main(){
    std::cout << "\n* Cadastro de Notas Escolares\n\n";

    // Vetor para armazenar os cadastros dos alunos
    std::vector<Cadastro> alunos;

    // Total de alunos
    int totalAlunos;

    // Total de notas
    int totalNotas;

    // Média global da turma
    float mediaGlobal = 0.0f;

    // ------------------------------------------------------------------------

    // Entrada do total de alunos e do total de notas
    std::cout << ">> Informe o total de alunos: ";
    std::cin >> totalAlunos;

    std::cout << ">> Informe o total de notas: ";
    std::cin >> totalNotas;

    std::cout << std::endl;

    // ------------------------------------------------------------------------

    // Cadastro dos dados de cada aluno

    // Loop para cadastrar os alunos
    for (int i = 0; i < totalAlunos; i++){
        // Estrutura para cadastro dos dados do aluno
        Cadastro aluno;
        
        std::cout << "\n>> Informe o nome do aluno " << i + 1 << ": ";

        // Entrada do nome do aluno
        // Ignora os espaços em branco deixados no buffer
        getline(std::cin >> std::ws, aluno.nome);

        // --------------------------------------------------------------------

        std::cout << "   Informe a linha com as " << totalNotas << " notas: ";

        // Variável para armazenar a linha com as notas
        std::string linhaNotas;

        // Entrada da linha de notas
        getline(std::cin, linhaNotas);

        // Extrair as notas da linha
        std::istringstream stream(linhaNotas);

        // Variável para armazenar a nota
        float notaTemp;

        // Extrai cada nota da linha e insere no vetor de notas,
        // dentro da estrutura Cadastro
        while (stream >> notaTemp)
            aluno.notas.push_back(notaTemp);
        
        // --------------------------------------------------------------------

        // Calcula e atribui a média do aluno
        aluno.media = calcularMedia(aluno.notas);

        // Adicionar o cadastro do aluno dentro do vetor de alunos
        alunos.push_back(aluno);

        // Atualiza as informações sobre a média global da turma
        mediaGlobal += aluno.media;

        // Pula uma linha entre cada aluno
        std::cout << "\n";
    }

    // ------------------------------------------------------------------------

    // Calcula a média global da turma
    mediaGlobal /= totalAlunos;

    // ------------------------------------------------------------------------

    // Executa a função para ordenar os cadastros dentro do vetor
    // No caso, realiza a ordenação de acordo com os nomes cadastrados
    sort(alunos.begin(), alunos.end(), compararNomes);

    // ------------------------------------------------------------------------

    // Apresenta o resultado

    // Formata a exibição do resultado
    std::cout << std::setprecision(2);
    std::cout << std::setiosflags(std::ios::fixed);

    std::cout << "* Resultado final\n\n";

    // Loop para percorrer os alunos cadastrado no vetor de alunos
    for (const auto& aluno : alunos){
        // Exibe o nome do aluno
        std::cout << "Aluno: " << aluno.nome << std::endl;
        std::cout << "Notas: ";

        // Exibe as notas do aluno
        for (float nota : aluno.notas)
            std::cout << nota << "  ";

        // Exibe a média do aluno
        std::cout << "\nMedia: " << aluno.media << std::endl;

        // Pula uma linha entre os dados de cada aluno
        std::cout << std::endl;
    }

    // Exibe a média global da turma
    std::cout << "* Media global da turma: " << mediaGlobal << "\n\n";

    // ------------------------------------------------------------------------

    // Fim do programa
    return 0;
}