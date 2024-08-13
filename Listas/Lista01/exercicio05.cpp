// exercicio05.cpp
/*
Programa que recebe um número equivalente a um determinado mês e informa a
quantidade de dias que ele possui. O programa deve exivir uma mensagem para
os valores que não correspondem a um mês válido.
*/

#include <iostream>

int main(){
    int mes;

    std::cout << "\nEstrutura de controle com múltipla escolha\n\n";
    std::cout << "* Informe o número equivalente ao mês desejado: ";
    std::cin >> mes;

    // Verifica a quantidade de dias do mês
    switch (mes){
        // Meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "\n=> O mês " << mes << " possui 31 dias.\n\n";
            break;
        // Meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "\n=> O mês " << mes << " possui 30 dias.\n\n";
            break;
        // Mês com 28 dias
        case 2:
            std::cout << "\n=> O mês " << mes << " possui 28 dias.\n\n";
            break;
        default:
            std::cout << "O mês " << mes << " não existe!\n\n";
    }

    return 0;
}