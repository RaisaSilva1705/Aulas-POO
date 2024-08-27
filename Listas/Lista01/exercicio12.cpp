// exercicio12.cpp
/*
Utilizando como dados de entrada a altura e o sexo de uma pessoa, escreva um programa
que calcule seu peso ideal e informe se ela está dentro, acima ou abaixo do peso.
Considere as seguintes fórmulas:
    a. Para homens: (72.7 x altura) - 58
    b. Para mulheres: (62.1 x altura) - 44.7
*/

#include <iostream>

int main(){
    // Declaração de variáveis
    float altura, peso, pesoIdeal, X1, X2;
    char sexo;

    do{
        std::cout << " Informe seu Sexo(F/M): "; std::cin >> sexo; 

    }while(!(sexo == 'f' || sexo == 'F' || sexo == 'm' || sexo == 'M'));
    
    std::cout << " Informe sua altura...: "; std::cin >> altura;
    std::cout << " Informe seu peso.....: "; std::cin >> peso;
    system("cls");

    if( sexo == 'f' || sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
        std::cout << "peso ideal para voce e: "<< pesoIdeal << " quilos." << std::endl;
        X1 = peso + 3;
        X2 = peso - 3;
        if (pesoIdeal < X1 && pesoIdeal > X2) {
            std::cout << "Voce esta dentro da media do seu peso ideal com: " << peso << " quilos." << std::endl;
        } else if (X1 > pesoIdeal) {
            std::cout << "Voce esta acima do peso com: " << peso << " quilos." << std::endl; 
        } else if (X2 < pesoIdeal) {
            std::cout << "Voce esta abaixo do peso com: " << peso << " quilos." << std::endl;
        }
    }

    if(sexo == 'm' || sexo == 'M'){
        pesoIdeal = (72.7 * altura) - 58;
        std::cout << " Peso ideal para voce: "<< pesoIdeal << std::endl;
        X1 = peso + 3;
        X2 = peso - 3;
        if(pesoIdeal < X1 && pesoIdeal > X2){
            std::cout << " Voce esta dentro da media do seu peso ideal com: " << peso << " quilos."<< std::endl;
        }
        if(X1 > pesoIdeal){
            std::cout << " Voce esta acima do peso com: " << peso << " quilos."<< std::endl; 
        }
        if(X2 < pesoIdeal){
            std::cout << " Voce esta abaixo do peso com: " << peso << " quilos."<< std::endl;
        }
    }

    return 0;
}