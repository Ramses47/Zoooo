//
// Created by Ramsés on 30/04/2024.
//

#include "Camaron.h"
Camaron::Camaron(): Animal() {
    Habitat = "a";
    Profundidad = "a";

}

Camaron::Camaron(const Camaron&rhs) : Animal(rhs) {
    Habitat = rhs.Habitat;
    Profundidad = rhs.Profundidad;

}
Camaron::Camaron(std::string nombre, float altura, float peso,
                 int edad, std::string sonido, std::string Habitat, std::string Profundidad)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> Habitat = Habitat;
    this -> Profundidad = Profundidad;
}
void Camaron::makeSound() {
    std::cout << "gugugu" <<std::endl;
}
Camaron::~Camaron(){

}