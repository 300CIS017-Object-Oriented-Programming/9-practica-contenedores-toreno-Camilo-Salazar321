//
// Created by Asus on 1/04/2025.
//

#include "VideoJuego.h"

#include <iostream>

VideoJuego::VideoJuego(std::string codigo, std::string nombre, std::string genero, int nivelDificultad) {
    this->codigo = codigo;
    this ->nombre = nombre;
    this->genero = genero;
    this->nivelDificultad = nivelDificultad;
}

void VideoJuego::mostrarInfoVideoJuego() {

    std::cout<<"Codigo del video juego: "<<this->codigo<<std::endl;
    std::cout<< "Nombre del video juego: "<<this->nombre<<std::endl;
    std::cout<< "Genero del video juego: "<<this->genero<<std::endl;
    std::cout<< "Nivel de dificultad: "<<this->nivelDificultad<<std::endl;
}
