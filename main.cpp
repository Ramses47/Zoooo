#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Capibara.h"
#include "Lobo.h"
#include "Tiburon.h"
#include "Pulpo.h"
#include "Camaron.h"

int main() {

    Animal *animal = new Perro();
    animal -> makeSound();

    Animal *animal1 = new Gato();
    animal1 -> makeSound();

    Animal *animal2 = new Capibara();
    animal2 -> makeSound();

    Animal *animal3 = new Lobo();
    animal3 -> makeSound();

    Animal *animal4 = new Tiburon();
    animal4 -> makeSound();

    Animal *animal5 = new Pulpo();
    animal5 -> makeSound();

    Animal *animal6 = new Camaron();
    animal6 -> makeSound();


    return 0;
}