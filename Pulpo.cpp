//
// Created by Ramsés on 30/04/2024.
//

#include "Pulpo.h"
Pulpo::Pulpo(): Animal() {
    Habitat = "a";
    Profundidad = "a";

}

Pulpo::Pulpo(const Pulpo&rhs) : Animal(rhs) {
    Habitat = rhs.Habitat;
    Profundidad = rhs.Profundidad;

}
Pulpo::Pulpo(std::string nombre, float altura, float peso,
             int edad, std::string sonido, std::string Habitat, std::string Profundidad)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> Habitat = Habitat;
    this -> Profundidad = Profundidad;
}
void Pulpo::makeSound() {
    std::cout << "GuGuGu" <<std::endl;
}
Pulpo::~Pulpo(){

}