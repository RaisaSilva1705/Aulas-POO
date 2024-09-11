// ponteiroExemplo06.cpp
/*
Exemplo de aritmética de ponteiros
*/

#include <iostream>

int main(){
    std::cout << "\nExemplo de Aritmetica de Ponteiro\n\n";

    // Declaração e inicialização de um array de inteiros
    int numeros[] = {2, 5, 10, 1, 3, 21};

    // Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr = numeros;

    std::cout << "1. Valor apontado por <ptr>: " << *ptr << std::endl;

    // -----------------------------------------------------------------

    // Incrementa uma posição
    ptr++;

    std::cout << "2. Valor apontado por <ptr>: " << *ptr << std::endl;

    // -----------------------------------------------------------------

    // Adição de inteiro uma posição
    ptr = ptr + 3;

    std::cout << "3. Valor apontado por <ptr>: " << *ptr << std::endl;

    // -----------------------------------------------------------------

    // Decrementa uma posição
    ptr--;

    std::cout << "4. Valor apontado por <ptr>: " << *ptr << std::endl;

    // -----------------------------------------------------------------

    // Declara o ponteiro e aponta para o primeiro elemento do array
    int *ptr1 = &numeros[0];

    // Declara o ponteiro e aponta para o quinto elemento do array
    int *ptr2 = &numeros[4];

    std::cout << "5. Valor apontado por <ptr1>: " << *ptr1 << std::endl;
    std::cout << "5. Valor apontado por <ptr2>: " << *ptr2 << std::endl;

    // Calcula o total de elementos entre os ponteiros
    int total = ptr2 - ptr1;

    std::cout << "7. Total de elementos entre <ptr1> e <ptr2>: " << total << std::endl;

    // -----------------------------------------------------------------

    // Verifica a posição do elemento apontado pelos ponteiros
    if (ptr1 > ptr2)
        std::cout << "8. <ptr1> aponta para um elemento mais a frente no array." << std::endl;
    else
        std::cout << "8. <ptr2> aponta para um elemento mais a frente no array." << std::endl;
    
    // -----------------------------------------------------------------

    // Declara o ponteiro e aponta para o primerio elemento do array
    int *ptr3 = numeros;

    // Acessa o segundo elemento
    int segundoElemento = *(ptr3 + 1);

    std::cout << "9. Segundo elemento do array: " << *ptr3 << "\n\n";

    // Fim do programa
    return 0;
}