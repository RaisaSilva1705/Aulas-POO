// arrayEstatico.cpp
/*
Exemplo: total de elementos em um array estático
*/

#include <iostream>

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int total = sizeof(array) / sizeof(array[0]);

    std::cout << "Total de alementos: " << total << std::endl;

    return 0;
}