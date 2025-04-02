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
    void registrarVideojuego(std::string codigoNuevoVideojuego);
    void registrarJugador(std::string nicknameNuevoJugador);
    void inscribirJugadorEnVideojuego(std::string codigoVideojuego,std::string nicknameJugador);
    void mostrarVideojuegosDeJugador(std::string nickname);
    void promedioDificultadVideojuegosInscritos(std::string nicknameJugador);
    void inicializarVideojuegos();
    void inicializarJugadores();


};



#endif //TORNEO_H
