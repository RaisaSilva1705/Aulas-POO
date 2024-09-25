// exemplo04struct
/*
Programa para demonstrar o uso de ponteiros para estruturas
*/

#include <iostream>
#include <string>

// ------------- ESTRUTURA -------------
// Definição da estrutura Pokémon
struct Pokemon {
    // Atributos
    std::string nome;
    std::string tipo;
    int nivel;
    int hp;

    // Método para aumentar os pontos de vida do Pokémon
    void aumentaHP(int pontos){
        hp += pontos;
    }
};

// ------------- FUNÇÃO PRINCIPAL -------------
int main(){
    std::cout << "\n* Exemplo Pokemon\n\n";

    // Alocando dinamicamente uma estrutura do tipo Pokémon
    Pokemon* ptrPokemon = new Pokemon;

    // Utiliza o ponteiro para atribuir os valores ao Pokémon
    ptrPokemon->nome = "Pikachu";
    ptrPokemon->tipo = "Eletrico";
    ptrPokemon->nivel = 1;
    ptrPokemon->hp = 1;

    // Utiliza o ponteiro para acessar os valores do Pokémon
    std::cout << ">> Dados do Pokemon\n\n";
    std::cout << "Nome.: " << ptrPokemon->nome << std::endl;
    std::cout << "Tipo.: " << ptrPokemon->tipo << std::endl;
    std::cout << "Nivel: " << ptrPokemon->nivel << std::endl;
    std::cout << "HP...: " << ptrPokemon->hp << std::endl;

    std::cout << "\n";

    std::cout << ">> Um Pokemon selvagem apareceu... Vamos batalhar!\n\n";
    std::cout << "Seu Pikachu venceu uma luta muito dificil... ";
    std::cout << "Ele ganhou 50 pontos!\n";

    // Aumenta o HP do Pokémon
    ptrPokemon->aumentaHP(50);

    std::cout << "Olhe, o que esta acontecendo? Seu Pikachu esta brilhando!\n";

    // Aumenta o nível do Pikachu
    ptrPokemon->nivel++;

    std::cout << "O Pikachu subiu de nivel!\n\n";

    // Utiliza o ponteito para acessar os valores do Pokémon
    std::cout << ">> Dados do Pokemon\n\n";
    std::cout << "Nome.: " << ptrPokemon->nome << std::endl;
    std::cout << "Tipo.: " << ptrPokemon->tipo << std::endl;
    std::cout << "Nivel: " << ptrPokemon->nivel << std::endl;
    std::cout << "HP...: " << ptrPokemon->hp << std::endl;

    std::cout << "\n";

    // ------------------------------------------------------------------------

    // Liberando a memória alocada
    delete ptrPokemon;

    // Fim do programa
    return 0;
}