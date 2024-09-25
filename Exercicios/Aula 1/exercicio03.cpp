// exercicio03.cpp
/*
Programa que permite a leitura de duas notas de um aluno e calcula a média.
Se essa média for maior ou igual ao valor 6, exibe uma mensagem informando
que o aluno foi aprovado, juntamente com o valor da média que foi obtida.
Considere a apresentação dos valores utilizando duas casas decimais.
*/

#include <iostream>
#include <iomanip>

int main(){
    // Declaração das variáveis
    float n1, n2, media{0};

    // Entrada dos dados
    std::cout << "\nDesvio condicional simples\n\n";
    std::cout << "* Informe as duas notas do aluno: ";
    std::cin >> n1 >> n2;

    // Calcula a média do aluno
    media = (n1 + n2)/2;

    // Formatação do resultado
    std::cout << std::setprecision(3);
    std::cout << setiosflags(std::ios::showpoint);

    // Verifica se ele foi aprovado
    if (media >= 6){
        std::cout << "O aluno foi aprovado com média final " << media << "!\n\n";
    }

    // Fim do programa
    return 0;
}
