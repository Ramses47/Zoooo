//
// Created by Ramsés on 30/04/2024.
//

#include "Perro.h"
Perro::Perro(): Animal() {
    raza = "a";
    color = "a";

}

Perro::Perro(const Perro &rhs) : Animal(rhs) {
    raza = rhs.raza;
    color = rhs.color;

}
Perro::Perro(std::string nombre, float altura, float peso,
             int edad, std::string sonido, std::string raza, std::string color)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> raza = raza;
    this -> color = color;
}
void Perro::makeSound() {
    std::cout << "Guau" <<std::endl;
}
Perro::~Perro(){

}