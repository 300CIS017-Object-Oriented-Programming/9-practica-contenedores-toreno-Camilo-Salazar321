//
// Created by Asus on 1/04/2025.
//

#include "Torneo.h"

#include <iostream>

Torneo::Torneo() {
}

void Torneo::registrarVideojuego(std::string codigoNuevoVideojuego) {

   if (videojuegosDisponibles.find(codigoNuevoVideojuego) != videojuegosDisponibles.end()) {
      std::cerr << "No es posible registrar videojuego debido a que este ya existe en nuestra base de datos" << std::endl;
   }
   else {
      std::cout<<"Por favor digite los siguientes datos del videojuego a registrar:"<<std::endl;
      std::cout<<"Nombre del videojuego:"<<std::endl;
      std::string nombre;
      std::cin >> nombre;
      std::cout<<"Genero del videojuego:"<<std::endl;
      std::string genero;
      std::cin >> genero;
      std::cout<<"Nivel de dificultad del videojuego:"<<std::endl;
      int dificultad;
      std::cin >> dificultad;


   }



}

void Torneo::registrarJugador() {
}

void Torneo::inscribirJugadorEnVideojuego() {
}

void Torneo::mostrarVideojuegosDeJugador() {
}

void Torneo::promedioDificultadVideojuegosInscritos(std::string nicknameJugador) {
}

void Torneo::inicializarVideojuegos() {
}

void Torneo::inicializarJugadores() {
}


Torneo::~Torneo() {
}