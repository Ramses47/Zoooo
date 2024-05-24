//
// Created by Ramsés on 30/04/2024.
//

#include "Gato.h"
Gato::Gato(): Animal() {
    raza = "a";
    color = "a";

}

Gato::Gato(const Gato &rhs) : Animal(rhs) {
    raza = rhs.raza;
    color = rhs.color;

}
Gato::Gato(std::string nombre, float altura, float peso,
           int edad, std::string sonido, std::string raza, std::string color)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> raza = raza;
    this -> color = color;
}
void Gato::makeSound() {
    std::cout << "Miau" <<std::endl;

}
Gato::~Gato(){

}