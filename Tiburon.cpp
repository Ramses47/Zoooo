//
// Created by Ramsés on 30/04/2024.
//

#include "Tiburon.h"
Tiburon::Tiburon(): Animal() {
    Habitat = "a";
    Profundidad = "a";

}

Tiburon::Tiburon(const Tiburon &rhs) : Animal(rhs) {
    Habitat = rhs.Habitat;
    Profundidad = rhs.Profundidad;

}
Tiburon::Tiburon(std::string nombre, float altura, float peso,
                 int edad, std::string sonido, std::string Habitat, std::string Profundidad)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> Habitat = Habitat;
    this -> Profundidad = Profundidad;
}
void Tiburon::makeSound() {
    std::cout << "GUGUGU" <<std::endl;
}
Tiburon::~Tiburon(){

}