// exercicio19.cpp
/*
Escreva um programa que peça a entrada de uma letra e verifique se ela é vogal ou consoante.
*/

#include <iostream>

int main(){
    char letra;

    std::cout << "* Informe uma letra: "; std::cin >> letra;
    
    // Converte para maiusculo
    letra = std::toupper(letra);

    // Verificação
    if (letra == 'A'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        std::cout << "A letra " << letra << " é uma vogal";
    else
        std::cout << "A letra " << letra << " é uma consoante";

    return 0;
}