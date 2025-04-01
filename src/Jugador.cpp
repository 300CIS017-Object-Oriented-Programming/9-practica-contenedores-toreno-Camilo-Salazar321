//
// Created by Asus on 1/04/2025.
//

#include "Jugador.h"

#include <iostream>

Jugador::Jugador(std::string nickname, int nivelRanking) {
    this->nickname = nickname;
    this->nivelRanking = nivelRanking;
}

void Jugador::mostrarInfoJugador() {
    std::cout << "Nombre del Jugador: " << nickname << "\n";
    std::cout << "Nivel: " << nivelRanking << "\n";
}

void Jugador::mostrarJuegosInscritos() {
    for (int i = 0; i < videoJuegosInscritos.size(); i++) {
        std::cout << videoJuegosInscritos[i] << "\n";
    }
}

void Jugador::ActualizarRanking(int nuevoRanking) {
    if (nuevoRanking > 0 && nuevoRanking < 100) {
        this->nivelRanking = nuevoRanking;
    }

}
