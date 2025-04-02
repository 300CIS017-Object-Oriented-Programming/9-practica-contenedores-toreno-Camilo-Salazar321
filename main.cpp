//
// Created by Asus on 1/04/2025.
//
#include "src/Torneo.h"
#include "src/Jugador.h"
#include "src/VideoJuego.h"
#include <iostream>

void mostrarMenu() {
    std::cout << "\n----- BIENVENIDO AL TORNEO BATTEL ARENA, SELECCIONE UNA DE LAS SIGUIENTES OPCIONES PARA CONTINUAR -----" << std::endl;
    std::cout << "1. Registrar Videojuego" << std::endl;
    std::cout << "2. Registrar Jugador" << std::endl;
    std::cout << "3. Inscribir Jugador en Videojuego" << std::endl;
    std::cout << "4. Mostrar Videojuegos de un Jugador" << std::endl;
    std::cout << "5. Mostrar promedio de dificultad de los Videojuegos jugados por un Jugador" << std::endl;
    std::cout << "0. Salir" << std::endl;
    std::cout << "Seleccione una opcion: ";
}


int main(){
    Torneo BattleArena;

    int opcion;

    do {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string codigo;
                std::cout << "Por favor digite el codigo del nuevo juego que desea agregar: ";
                std::cin >> codigo;
                BattleArena.registrarVideojuego(codigo);
                std::cout << "Videojuego registrado exitosamente";
                break;
            }
            case 2: {
                std::string nombre;
                std::cout << "Por favor digite el nickname del nuevo jugador que desea agregar: ";
                std::cin >> nombre;
                BattleArena.registrarJugador(nombre);
                std::cout << "Jugador registrado exitosamente";
                break;
            }
            case 3: {
                std::string nombre1, codigo1;
                std::cout << "Por favor digite el nickname del jugador que desea registrar a un nuevo videojuego: ";
                std::cin >> nombre1;
                std::cout << "Por favor digite el codigo del videojuego en el cual desea agregar al jugador: ";
                std::cin >> codigo1;
                BattleArena.inscribirJugadorEnVideojuego(codigo1,nombre1);
                std::cout << "Jugador ingresado al juego de de forma exitosa\n";
                break;
            }
            case 4: {
                std::string nombre2;
                std::cout << "Por favor digite el nickname del jugador del cual desea observar los juegos jugados: ";
                std::cin >> nombre2;
                BattleArena.mostrarVideojuegosDeJugador(nombre2);
                break;
            }
            case 5: {
                std::string nombre3;
                std::cout << "Por favor digite el nickname del jugador del cual calcular el promedio de dificultad de los videojuegos inscritos: ";
                std::cin >> nombre3;
                BattleArena.promedioDificultadVideojuegosInscritos(nombre3);
                break;
            }
            case 0:
                std::cout << "Saliendo del Programa...\n";
                break;
            default:
                std::cout << "Opcion no valida!\n";
                break;
        }
    } while (opcion != 0);

    return 0;
}





