//
// Created by Ramsés on 30/04/2024.
//

#include "Capibara.h"
Capibara::Capibara(): Animal() {
    Manada = "a";
    Sexo = "a";

}

Capibara::Capibara(const Capibara &rhs) : Animal(rhs) {
    Manada = rhs.Manada;
    Sexo = rhs.Sexo;

}
Capibara::Capibara(std::string nombre, float altura, float peso,
                   int edad, std::string sonido, std::string Manada, std::string Sexo)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> Manada = Manada;
    this -> Sexo = Sexo;
}
void Capibara::makeSound() {
    std::cout << "bruu" <<std::endl;
}
Capibara::~Capibara(){

}