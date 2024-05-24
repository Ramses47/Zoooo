cmake_minimum_required(VERSION 3.26)
project(animal4)

set(CMAKE_CXX_STANDARD 17)

add_executable(animal4 main.cpp
        Perro.cpp
        Perro.h
        Animal.cpp
        Animal.h
        Gato.cpp
        Gato.h
        Capibara.cpp
        Capibara.h
        Lobo.cpp
        Lobo.h
        Tiburon.cpp
        Tiburon.h
        Pulpo.cpp
        Pulpo.h
        Camaron.cpp
        Camaron.h)
