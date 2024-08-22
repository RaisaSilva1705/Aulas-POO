// exercicio04.cpp
/*
Programa que permite a leitura de duas notas de um aluno e calcula a média.
Se o valor da média for menor que 4, informa que o aluno foi reprovado.
Se o valor da média estiver entre 4 e 6, informa que o aluno deve realizar
a prova de recuperação (IFA). Se o valor da média for maior ou igual ao
valor 6, informa que o aluno foi aprovado. O programa deve exibir a situação
do aluno, juntamente com a média que ele obteve. Considere a apresentação
dos valores utilizando duas casas decimais.
*/

#include <iostream>
#include <iomanip>

int main(){
    // Declaração das variáveis
    float n1, n2, media{0};

    // Entrada dos dados
    std::cout << "\nDesvio condicional composto\n\n";
    std::cout << "* Informe as duas notas do aluno: ";
    std::cin >> n1 >> n2;

    // Calcula a média do aluno
    media = (n1 + n2)/2;

    // Formatação do resultado
    std::cout << std::setprecision(3);
    std::cout << setiosflags(std::ios::showpoint);

    // Verifica a situação do aluno
    if (media < 4){
        std::cout << "* O aluno foi reprovado com média final " << media << "!\n\n";
    }
    else if (media >= 4 && media < 6){
        std::cout << "* O aluno obeteve a média final " << media << ". Ele deve realizar o IFA.\n\n";
    }
    else{
        std::cout << "* O aluno foi aprovado com média final " << media << "!\n\n";
    }

    // Fim do programa
    return 0;
}
