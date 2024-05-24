//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_LOBO_H
#define ANIMAL_LOBO_H


#include "Animal.h"

class Lobo: public Animal {
public:
    Lobo();
    Lobo(const Lobo &rhs);
    Lobo(std::string nombre, float altura, float peso,
         int edad, std::string sonido, std::string Manada, std::string Sexo);
    ~Lobo();
    void makeSound() override;
    std::string Manada;
    std::string Sexo;
    std::string sonido;
};


#endif //ANIMAL_PERRO_H