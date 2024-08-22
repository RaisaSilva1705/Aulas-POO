// exercicio06.cpp
/*
Escreva um programa para efetuar o cálculo da quantidade total de litros de combustível
gasta em uma viagem. O usuário deverá fornecer os valores do tempo gasto na viagem, da
velocidade média que foi utilizada e da quantidade de quilômetros que o automóvel faz com
um litro de combústivel. Para obter a distância percorrida, utilize a fórmula DISTANCIA =
TEMPO X VELOCIDADE. A quantidade de litros de combustível gasta na viagem pode ser obtida
pela fórmula DISTANCIA / QUANTIDADE_KILOMETROS_LITRO. O programa deve apresentar os valores
da velocidade média, do tempo gasto na viagem, da distância total que foi percorrida e da
quantidade de litros de combustível que foi utilizada na viagem. Para apresentar o resultado,
considere a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>

int main(){
    float tempo, velocidadeMedia, kmLitro, distancia, litroTotal;

    std::cout << "\n-- Calculo da quantidade total de litros --";
    std::cout << " -- de combustivel gasta em uma viagem --\n";

    // Inserindo os dados
    std::cout << "\n\n";
    std::cout << "* Informe o tempo (em horas) gasto na viagem: "; std::cin >> tempo;
    std::cout << "* Informe a velocidade media (km/h) da viagem: "; std::cin >> velocidadeMedia;
    std::cout << "* Informe quantos km por litro: "; std::cin >> kmLitro;

    // Calculos
    distancia = tempo * velocidadeMedia;
    litroTotal = distancia / kmLitro;

    // Formatação
    std::cout << std::fixed << std::setprecision(2);

    // Exibição
    std::cout << "\n\nSua viagem com duracao de " << tempo << " e com velocidade media de " << velocidadeMedia;
    std::cout << "\nCom a distancia total percorrida de " << distancia;
    std::cout << "\nA quantidade total de litros gastas nessa viagem é de " << litroTotal << std::endl;

    return 0;
}