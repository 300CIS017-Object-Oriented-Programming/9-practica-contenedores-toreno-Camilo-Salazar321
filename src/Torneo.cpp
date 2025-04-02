//
// Created by Asus on 1/04/2025.
//

#include "Torneo.h"

#include <iostream>

Torneo::Torneo() {
   inicializarJugadores();
   inicializarVideojuegos();
}

void Torneo::registrarVideojuego(std::string codigoNuevoVideojuego) {

   if (videojuegosDisponibles.find(codigoNuevoVideojuego) != videojuegosDisponibles.end()) {
      std::cout << "No es posible registrar videojuego debido a que este ya existe en nuestra base de datos" << std::endl;
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

      VideoJuego *videojuegoNuevo= new VideoJuego(codigoNuevoVideojuego,nombre, genero, dificultad);
      videojuegosDisponibles[codigoNuevoVideojuego] = videojuegoNuevo;
      std::cout<<"El nuevo juego ha sido agregado con exito!!!";
   }
}

void Torneo::registrarJugador(std::string nicknameNuevoJugador) {

   if(jugadoresRegistrados.find(nicknameNuevoJugador) != jugadoresRegistrados.end()) {
      std::cout << "No es posible registrar al nuevo jugador debido a que este ya existe en nuestra base de datos" << std::endl;
   }
   else {
      Jugador *jugadorNuevo= new Jugador(nicknameNuevoJugador);
      jugadoresRegistrados[nicknameNuevoJugador] = jugadorNuevo;
      std::cout << "Jugador registrado exitosamente";
   }
}

void Torneo::inscribirJugadorEnVideojuego(std::string codigoVideojuego,std::string nicknameJugador) {

   if (videojuegosDisponibles.find(codigoVideojuego) != videojuegosDisponibles.end() && jugadoresRegistrados.find(nicknameJugador) != jugadoresRegistrados.end()) {
      /*
       *Intento de otra forma para hacerlo funcionar, no alcanzo a probarlo :(
      if (std::find(jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().begin(), jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().end(), videojuegosDisponibles[codigoVideojuego]) == jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().end()) {
         jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().push_back(videojuegosDisponibles[codigoVideojuego]);
         std::cout<<"El jugador fue inscrito al videojuego exitosamente!!"<<std::endl;
         } else {
         std::cout << "No se puede inscribir el jugador al videojuego puesto que este ya se encuentra inscrito"<<std::endl;
         }
       */

      for (int i=0 ; i< jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().size(); i++) {
         if (jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos()[i] == videojuegosDisponibles[codigoVideojuego]) {
            std::cout << "No se puede inscribir el jugador al videojuego puesto que este ya se encuentra inscrito"<<std::endl;
            return;
         }
         }
      jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().push_back(videojuegosDisponibles[codigoVideojuego]);
      std::cout<<"El jugador fue inscrito al videojuego exitosamente!!"<<std::endl;
      }
   else{
      std::cout << "No es posible registrar el jugador a este videojuego debido a que no se encuentra alguno de los dos en nuestra base de datos" << std::endl;
   }
}

void Torneo::mostrarVideojuegosDeJugador(std::string nickname) {
   if(jugadoresRegistrados.find(nickname) != jugadoresRegistrados.end()) {
      jugadoresRegistrados[nickname]->mostrarJuegosInscritos();
   }
   else {
      std::cout << "El jugador seleccionado no existe en nuestra base de datos" << std::endl;
   }
}

void Torneo::promedioDificultadVideojuegosInscritos(std::string nicknameJugador) {
   if (jugadoresRegistrados.find(nicknameJugador) != jugadoresRegistrados.end()) {
      int sumatoria=0;
      for (int i=0 ; i< jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().size(); i++) {
         int suma=jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos()[i]->getNivelDificultad();
         sumatoria+=suma;
      }
      double promedio=(double)sumatoria/((jugadoresRegistrados[nicknameJugador]->getVideoJuegosInscritos().size())-1);
      std::cout<<"El promedio de la difitulad de los videojuegos jugados por el jugador es de: "<<promedio<<std::endl;
   }
   else {
      std::cout << "El jugador seleccionado no existe en nuestra base de datos" << std::endl;
   }
}

void Torneo::inicializarVideojuegos() {
   VideoJuego *videojuego1 = new VideoJuego("VG001", "Dark Souls III", "Acción-RPG", 5);
   VideoJuego *videojuego2 = new VideoJuego("VG002", "The Legend of Zelda: Breath of the Wild", "Aventura/Acción", 3);
   VideoJuego *videojuego3 = new VideoJuego("VG003", "Hollow Knight", "Metroidvania", 4);
   VideoJuego *videojuego4 = new VideoJuego("VG004", "Stardew Valley", "Simulación/RPG", 2);
   VideoJuego *videojuego5 = new VideoJuego("VG005", "Celeste", "Plataformas", 4);

   videojuegosDisponibles["VG001"]=videojuego1;
   videojuegosDisponibles["VG002"]=videojuego2;
   videojuegosDisponibles["VG003"]=videojuego3;
   videojuegosDisponibles["VG004"]=videojuego4;
   videojuegosDisponibles["VG005"]=videojuego5;

}

void Torneo::inicializarJugadores() {

   Jugador *jugador1 = new Jugador("ShadowHunter");
   Jugador *jugador2 = new Jugador("PixelWarrior");
   Jugador *jugador3 = new Jugador("LunaGamer");

   jugadoresRegistrados["ShadowHunter"]=jugador1;
   jugadoresRegistrados["PixelWarrior"]=jugador2;
   jugadoresRegistrados["LunaGamer"]=jugador3;
}

Torneo::~Torneo() {

   for (const std::pair< std::string, Jugador*>& par : jugadoresRegistrados) {
      for (int i=0;i<par.second->getVideoJuegosInscritos().size();i++) {
         delete par.second->getVideoJuegosInscritos()[i];
      }
      par.second->getVideoJuegosInscritos().clear();
      delete par.second;
   }
   jugadoresRegistrados.clear();

   for (const std::pair< std::string, VideoJuego*>& par : videojuegosDisponibles) {
      delete par.second;
   }
   videojuegosDisponibles.clear();
}