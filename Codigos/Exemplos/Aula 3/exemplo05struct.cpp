// exemplo05struct.cpp
/*
Programa para demonstrar o uso de aninhamento de estrutura
*/

#include <iostream>
#include <vector>

// Definição da estrutura Pokemon
struct Pokemon{
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

// Definição da estrutura Treinador
struct Treinador{
    // Atributos
    std::string nome;
    std::string cidade;

    // Vetor para armazenar os Pokémon
    std::vector<Pokemon> pokemons;
};

// Função principal
int main(){
    std::cout << "\n* Exemplo de Aninhamento de Estruturas\n\n";

    // Cria Treinador
    Treinador treinador;
    
    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";

    //-------------------------------------------------------------------------

    // Cria o Pikachu
    Pokemon pikachu;

    pikachu.nome = "Pikachu";
    pikachu.tipo = "Elétrico";
    pikachu.nivel = 40;
    pikachu.hp = 85;

    // Cria o Greninja
    Pokemon greninja;

    greninja.nome = "Greninja";
    greninja.tipo = "Água / Sombrio";
    greninja.nivel = 35;
    greninja.hp = 60;

    // Cria o Hawlucha
    Pokemon hawlucha;

    hawlucha.nome = "Hawlucha";
    hawlucha.tipo = "Lutador / Voador";
    hawlucha.nivel = 32;
    hawlucha.hp = 55;

    // ------------------------------------------------------------------------

    // Adiciona os Pokémons ao treinador
    treinador.pokemons.push_back(pikachu);
    treinador.pokemons.push_back(greninja);
    treinador.pokemons.push_back(hawlucha);

    // ------------------------------------------------------------------------

    // Exibindo os dados do treinador e de seus Pokémons

    std::cout << ">> Dados do treinador\n\n";
    std::cout << "Nome: " << treinador.nome << std::endl;
    std::cout << "Cidade: " << treinador.cidade << std::endl;
    
    std::cout << ">> Pokemons do Treinador\n\n";

    // Loop para exibir os dados dos Pokémons
    for (int i = 0; i < treinador.pokemons.size(); i++){
        std::cout << "Nome: " << treinador.pokemons[i].nome << std::endl;
        std::cout << "Tipo: " << treinador.pokemons[i].tipo << std::endl;
        std::cout << "Nivel: " << treinador.pokemons[i].nivel << std::endl;
        std::cout << "HP: " << treinador.pokemons[i].hp << std::endl;
        std::cout << std::endl;
    }

    // ------------------------------------------------------------------------

    // Fim do programa
    return 0;
}