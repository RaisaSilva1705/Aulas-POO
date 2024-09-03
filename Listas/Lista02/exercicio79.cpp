// exercicio79.cpp

#include <iostream>
#include <sstream>

int padrao(){
    for (int i = 0; i < 5; i++){
        std::cout << std::string(i, ' ') << std::string(5-i, '*') << std::endl;
    }
}

int main(){
    padrao();

    return 0;
}
