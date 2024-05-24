//
// Created by Alumnos on 30/04/2024.
//

#ifndef UNTITLED3_ANIMAL_H
#define UNTITLED3_ANIMAL_H
#include <iostream>
#include <string>

class Animal {
public:
    Animal();
    Animal(const Animal &rhs);
    Animal(std::string nombre, float altura, float peso, int edad, std::string sonido);
    ~Animal();

    virtual void makeSound();
    std::string nombre;
    float altura;
    float peso;
    int edad;
    std::string sonido;
};


#endif //UNTITLED3_ANIMAL_H