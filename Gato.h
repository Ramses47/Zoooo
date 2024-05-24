//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_GATO_H
#define ANIMAL_GATO_H
#include "Animal.h"

class Gato: public Animal{
public:
    Gato();
    Gato(const Gato &rhs);
    Gato(std::string nombre, float altura, float peso,
         int edad, std::string sonido, std::string raza, std::string color);
    ~Gato();
    void makeSound() override;
    std::string raza;
    std::string color;
    std::string sonido;
};


#endif //ANIMAL_PERRO_H