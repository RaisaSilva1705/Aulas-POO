// exercicio03.cpp

#include <iostream>

int main(){
    float nota1, nota2, nota3, nota4 = 0;
    float media = 0;
    
    std::cout << "Programa para calculo de média de aluno!\n\n";
    std::cout << "Informe a nota do 1º bimestre: ";
    std::cin >> nota1;
    std::cout << "Informe a nota do 2º bimestre: ";
    std::cin >> nota2;
    std::cout << "Informe a nota do 3º bimestre: ";
    std::cin >> nota3;
    std::cout << "Informe a nota do 4º bimestre: ";
    std::cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4)/4;
    std::cout << "A média das notas do aluno é " << media << "!\n";

    return 0;
}