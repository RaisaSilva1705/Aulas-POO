// exercicio07.cpp
/*
Programa que permite a leitura de um valor inteiro e apresenta o resultado
do cálculo da tabuada até 10 para esse valor.
*/

#include <iostream>
#include <iomanip>

int main(){
    int contador{0}, valor, resultado;

    std::cout << "\nLaço de repetição com condição inicial\n\n";
    std::cout << "* Informe o valor desejado: "; std::cin >> valor;
    std::cout << "\n=> Tabuada do " << valor << "\n\n";

    // Laço para realizar o cálculo da tabuada
    while (contador <= 10){
        // Calcula o resultado
        resultado = valor * contador;

        // Exibe a linha da tabuada
        std::cout << std::setw(2) << valor;
        std::cout << " X ";
        std::cout << std::setw(2) << contador;
        std::cout << " = ";
        std::cout << std::setw(2) << resultado << std::endl;

        // Incrementa o contador
        contador++;
    }

    std::cout << std::endl;

    return 0;
}