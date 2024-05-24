//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_PERRO_H
#define ANIMAL_PERRO_H
#include "Animal.h"

class Perro: public Animal{
public:
    Perro();
    Perro(const Perro &rhs);
    Perro(std::string nombre, float altura, float peso,
          int edad, std::string sonido, std::string raza, std::string color);
    ~Perro();
    void makeSound() override;

    std::string raza;
    std::string color;
    std::string sonido;

};


#endif //ANIMAL_PERRO_H