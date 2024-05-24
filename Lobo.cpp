//
// Created by Ramsés on 30/04/2024.
//

#include "Lobo.h"
Lobo::Lobo(): Animal() {
    Manada = "a";
    Sexo = "a";

}

Lobo::Lobo(const Lobo &rhs) : Animal(rhs) {
    Manada = rhs.Manada;
    Sexo = rhs.Sexo;

}
Lobo::Lobo(std::string nombre, float altura, float peso,
           int edad, std::string sonido, std::string Manada, std::string Sexo)
        : Animal(nombre, altura, peso, edad, sonido){
    this -> Manada = Manada;
    this -> Sexo = Sexo;
}
void Lobo::makeSound() {
    std::cout << "Auuu" <<std::endl;

}
Lobo::~Lobo(){

}