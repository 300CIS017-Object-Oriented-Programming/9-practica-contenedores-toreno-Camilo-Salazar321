//
// Created by Asus on 1/04/2025.
//

#include "Jugador.h"

#include <iostream>

Jugador::Jugador(std::string nickname) {
    this->nickname = nickname;
    this->nivelRanking = 1;
}

void Jugador::mostrarInfoJugador() {
    std::cout << "Nombre del Jugador: " << nickname << "\n";
    std::cout << "Nivel: " << nivelRanking << "\n";
}

void Jugador::mostrarJuegosInscritos() {
    for (int i = 0; i < videoJuegosInscritos.size(); i++) {
        videoJuegosInscritos[i]->mostrarInfoVideoJuego();
    }
}

void Jugador::ActualizarRanking(int nuevoRanking) {
    if (nuevoRanking >= 1 && nuevoRanking <= 100) {
        this->nivelRanking = nuevoRanking;
    }
    else {
        std::cout << "El valor de ranking seleccionado no se encuentra dentro del rango permitido"<<std::endl;
    }
}

std::vector<VideoJuego *> Jugador::getVideoJuegosInscritos() const{
    return videoJuegosInscritos;

}