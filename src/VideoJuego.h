//
// Created by Asus on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H
#include <string>


class VideoJuego {
private:
    std::string codigo;
    std::string nombre;
    std::string genero;
    int nivelDificultad;
public:
    VideoJuego();
    VideoJuego(std::string codigo, std::string nombre, std::string genero, int nivelDificultad);
    void mostrarInfoVideoJuego();
    int getNivelDificultad();





};



#endif //VIDEOJUEGO_H
