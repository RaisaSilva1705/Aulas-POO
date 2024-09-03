// exercicio15.cpp
/*
Escreva um programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que
são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicado. O
valor do salário líquido é obtido após realizar os descontos do salário bruto. O programa deve
apresentar o seguinte resultado, utilizando duas casas decimais:

=> Cálculo Salarial
+	Salário Bruto....:	R$	<valor do salário bruto>
-	IR (11%).........:	R$	<valor do imposto de renda>
-	INSS (8%)........:	R$	<valor do INSS>
-	Sindicato (5%)...:	R$	<valor do sindicato>
=	Salário Líquido..:	R$	<valor do salário líquido>
*/

#include <iostream>
#include <iomanip>

int main(){
    float horaTrabalhada, ganhoHora;
    float salarioBruto, IR, INSS, sindicato, salarioLiquido;

    std::cout << "\nPrograma para Calculo Salarial\n";

    std::cout << "\n* Informe seu ganho por hora: "; std::cin >> ganhoHora;
    std::cout << "\n* Informe suas horas trabalhadas: "; std::cin >> horaTrabalhada;

    // Cálculo do Salário Bruto
    salarioBruto = ganhoHora * horaTrabalhada;

    // Descontos
    IR = salarioBruto * 0.11;
    INSS = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;

    // Cálculo do Salário Líquido
    salarioLiquido = salarioBruto - IR - INSS - sindicato;

    // Formatação
    std::cout << std::setprecision(2) << std::setiosflags(std::ios::fixed);

    // Exibindo resultado
    std::cout << "\n";
    std::cout << "=> Calculo Salarial" << std::endl;
    std::cout << "+	Salario Bruto....:	R$	" << salarioBruto << std::endl;
    std::cout << "-	IR (11%).........:	R$	" << IR << std::endl;
    std::cout << "-	INSS (8%)........:	R$	" << INSS << std::endl;
    std::cout << "-	Sindicato (5%)...:	R$	" << sindicato << std::endl;
    std::cout << "=	Salario Liquido..:	R$	" << salarioLiquido << std::endl;

    return 0;
}
