//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_TIBURON_H
#define ANIMAL_TIBURON_H


#include "Animal.h"

class Tiburon: public Animal {
public:
    Tiburon();
    Tiburon(const Tiburon &rhs);
    Tiburon(std::string nombre, float altura, float peso,
            int edad, std::string sonido, std::string Habitat, std::string Profundidad);
    ~Tiburon();
    void makeSound() override;
    std::string Habitat;
    std::string Profundidad;
    std::string sonido;
};


#endif //ANIMAL_PERRO_H