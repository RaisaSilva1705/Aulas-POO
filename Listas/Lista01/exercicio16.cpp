// exercicio16.cpp
/*
Escreva um programa que peça o tamanho de um arquivo para download (em MB) e
a velocidade de um link de Internet (em Mbps). Em seguida, o programa deve calcular e
informar o tempo aproximado de download do arquivo utilizando este link (em minutos).
*/

#include <iostream>

int main(){
    float tamanhoArquivo, velInternet, tempoDownload;

    // Solicita a entrada do tamanho do arquivo e da velocidade da internet
    std::cout << "\n* Informe o tamanho do arquivo para download (em MB): "; std::cin >> tamanhoArquivo;
    std::cout << "\n* Informe a velocidade da internet (em Mbps): "; std::cin >> velInternet;

    // Calcula o tempo de download
    // Multiplicação por 8 para converter MB em Megabits
    tempoDownload = ((tamanhoArquivo * 8) / velInternet) / 60;  

    // Apresenta o tempo de download em minutos
    std::cout << "\nTempo de download (aproximadamente): " << tempoDownload << " minutos\n";

    return 0;
}