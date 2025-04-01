//
// Created by Asus on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H

#include<map>
#include<string>

#include "Jugador.h"
#include "VideoJuego.h"


class Torneo {
private:
    std::map<std::string, VideoJuego*> videojuegosDisponibles;
    std::map<std::string, Jugador*> jugadoresRegistrados;
public:
    Torneo();
    ~Torneo();
    void registrarVideojuego();
    void registrarJugador();
    void inscribirJugadorEnVideojuego();
    void mostrarVideojuegosDeJugador();
    void inicializarVideojuegos();
    void inicializarJugadores();


};



#endif //TORNEO_H
