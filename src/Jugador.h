//
// Created by Asus on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
#include <vector>
#include "VideoJuego.h"

class Jugador {
private:
    std::string nickname;
    int nivelRanking;
    std::vector<VideoJuego*>videoJuegosInscritos;
public:
    Jugador();
    Jugador(std::string nickname, int nivelRanking);
    void mostrarInfoJugador();
    void mostrarJuegosInscritos();
    void ActualizarRanking(int nuevoRanking);
};



#endif //JUGADOR_H
