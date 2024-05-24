//
// Created by Ramsés on 30/04/2024.
//

#ifndef ANIMAL_CAPIBARA_H
#define ANIMAL_CAPIBARA_H
#include "Animal.h"

class Capibara: public Animal {
public:
    Capibara();
    Capibara(const Capibara &rhs);
    Capibara(std::string nombre, float altura, float peso,
             int edad, std::string sonido, std::string Manada, std::string Sexo);
    ~Capibara();

    void makeSound() override;

    std::string Manada;
    std::string Sexo;
    std::string sonido;
};


#endif //ANIMAL_PERRO_H