// exercicio04.cpp
/*
Escreva um programa que peça para o usuário informar quanto ele ganha por hora, o nome do mês,
e o número de horas que ele trabalhou nesse mês. Em seguida, o programa deve calcular e 
exibir o salário que ele deve receber no final do mês. Para apresentar o resultado, considere
a utilização de duas casas decimais.
*/

#include <iostream>
#include <iomanip>
#include <cctype>

float ganho, horas, salario;
std::string mes;

void InserirMes(){
    int n;

    do{
        std::cout << "\n[1] Janeiro  [2] Fevereiro [3] Marco";
        std::cout << "\n[4] Abril    [5] Maio      [6] Junho";
        std::cout << "\n[7] Julho    [8] Agosto    [9] Setembro";
        std::cout << "\n[10] Outubro [11] Novembro [12] Dezembro";
        std::cout << "\n* Escolha um mês: "; std::cin >> n;

        switch (n){
            case 1:
                mes = "Janeiro";
                break;
            case 2:
                mes = "Fevereiro";
                break;
            case 3:
                mes = "Marco";
                break;
            case 4:
                mes = "Abril";
                break;
            case 5:
                mes = "Maio";
                break;
            case 6:
                mes = "Junho";
                break;
            case 7:
                mes = "Julho";
                break;
            case 8:
                mes = "Agosto";
                break;
            case 9:
                mes = "Setembro";
                break;
            case 10:
                mes = "Outubro";
                break;
            case 11:
                mes = "Novembro";
                break;
            case 12:
                mes = "Dezembro";
                break;
            default:
                std::cout << "\nMês invalido, tente novamente.";
        } 
    }while (!(n > 0 && n <= 12));
}

int main(){
    std::cout << "\nPrograma para calculo de salário\n";
    
    InserirMes();
    std::cout << "\n* Digite o valor por hora: "; std::cin >> ganho;
    std::cout << "\n* Digite as horas trabalhadas: "; std::cin >> horas;

    // Cálculo do salário
    salario = ganho * horas;

    // Exibir na tela
    std::cout << "No mes " << mes << " e,\n";
    std::cout << "De acordo com as " << horas << " horas trabalhadas e,\n";
    std::cout << "Com o valor " << ganho << " por hora,\n";

    // Formatação
    std::cout << std::setprecision(2);
    std::cout << std::setiosflags(std::ios::fixed);

    // Exibir na tela 2
    std::cout << "o seu salario sera: " << salario;
    std::cout << "\n\n";

    return 0;
}