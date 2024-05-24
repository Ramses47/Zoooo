//
// Created by Alumnos on 30/04/2024.
//

#include "Animal.h"
Animal::Animal() {
    nombre = "a";
    altura = 0;
    peso = 0;
    edad = 0;
    sonido = "a";
}

Animal::Animal(const Animal &rhs) {
    nombre = rhs.nombre;
    altura = rhs.altura;
    peso = rhs.peso;
    edad = rhs.edad;
    sonido = rhs.sonido;
}
Animal::Animal(std::string nombre, float altura, float peso, int edad, std::string sonido){
    this -> nombre = nombre;
    this -> altura = altura;
    this -> peso = peso;
    this -> edad = edad;
    this -> sonido = sonido;

}
Animal::~Animal(){

}
void Animal::makeSound() {
    std::cout << "si "<< std::endl;
}