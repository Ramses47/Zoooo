//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_PULPO_H
#define ANIMAL_PULPO_H


#include "Animal.h"

class Pulpo: public Animal {
public:
    Pulpo();
    Pulpo(const Pulpo &rhs);
    Pulpo(std::string nombre, float altura, float peso,
          int edad, std::string sonido, std::string Habitat, std::string Profundidad);
    ~Pulpo();
    void makeSound() override;
    std::string Habitat;
    std::string Profundidad;
    std::string sonido;
};


#endif //ANIMAL_PERRO_H