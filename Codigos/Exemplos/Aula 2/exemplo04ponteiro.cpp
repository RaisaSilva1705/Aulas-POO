// exemplo04ponteiro.cpp
/*
Passagem por referência com argumento ponteiro
*/

#include <iostream>
#include <cmath>

// Calcula e retorna o cubo de um argumento inteiro
void elevaCubo(float *nPtr){
    *nPtr = pow(*nPtr, 3);
}

int main(){
    std::cout << "\nExemplo de Passagem por Valor\n\n";

    // Declara e inicializa a variável
    float numero = 5;

    // Exibe seu valor original
    std::cout << "* Valor original: " << numero << std::endl;

    // Chama a função que eleva ao cubo, passando o argumento por valor
    elevaCubo(&numero);

    // Exibe seu valor modificado
    std::cout << "* Valor modificado: " << numero << std::endl;

    // Fim do programa
    return 0;
}
