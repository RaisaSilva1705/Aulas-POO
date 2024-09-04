// ponteiroExemplo03.cpp
/*
Passagem por valor
*/

#include <iostream>
#include <cmath>

// Calcula e retorna o cubo de um argumento inteiro
float elevaCubo(float n){
    return pow(n, 3);
}

int main(){
    std::cout << "\nExemplo de Passagem por Valor\n\n";

    // Declara e inicializa a variável
    float numero = 5;

    // Exibe seu valor original
    std::cout << "* Valor original: " << numero << std::endl;

    // Chama a função que eleva ao cubo, passando o argumento por valor
    numero = elevaCubo(numero);

    // Exibe seu valor modificado
    std::cout << "* Valor modificado: " << numero << std::endl;

    // Fim do programa
    return 0;
}
