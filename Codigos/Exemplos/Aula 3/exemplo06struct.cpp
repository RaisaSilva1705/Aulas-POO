// exemplo06struct.cpp
/*
Programa para demonstrar o uso de uniões
*/

#include <iostream>

// Definição da união
union Cadastro{
    const char *nome;
    float nota1;
    float nota2;
};

// Função principal
int main(){
    std::cout << "\n* Exemplo de Unioes\n\n";

    // Declara uma variável do tipo Cadastro
    union Cadastro aluno;

    // ------------------------------------------------------------------------

    // Exibe o endereço de memória utilizado por cada atributo
    std::cout << "Endereco de memoria utilizado por <nome>: " << &aluno.nome << std::endl;
    std::cout << "Endereco de memoria utilizado por <nota1>: " << &aluno.nota1 << std::endl;
    std::cout << "Endereco de memoria utilizado por <nota2>: " << &aluno.nota2 << std::endl;

    std::cout << std::endl;

    // ------------------------------------------------------------------------

    // Atribui um valor para o atributo nome
    aluno.nome = "Paulo Giovani";
    std::cout << "Nome: " << aluno.nome << std::endl;

    // Atribui um valor para o atributo nota 1
    aluno.nota1 = 10;
    std::cout << "Nota 1: " << aluno.nota1 << std::endl;

    // Atribui um valor para o atributo nota 2
    aluno.nota1 = 10;
    std::cout << "Nota 2: " << aluno.nota2 << std::endl;

    std::cout << std::endl;

    // ------------------------------------------------------------------------

    // Tentativa de acessar o valor de um atributo que não está ativo
    // Nesse caso, o programa resulta em um comportamento indefinido
    std::cout << "Nome: " << aluno.nome << std::endl;

    // ------------------------------------------------------------------------

    // Fim do programa
    return 0;
}
