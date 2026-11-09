#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

// Códigos ANSI para colores en la consola
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define BROWN   "\033[33m"

// Función para limpiar la pantalla de forma fluida
void limpiarPantalla() {
    std::cout << "\033[H\033[J";
}

int main() {
    // Mensaje inicial
    std::cout << "¡Preparando el árbol de Navidad...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Bucle de animación (se repetirá 40 veces)
    for (int frame = 0; frame < 40; ++frame) {
        limpiarPantalla();

        std::cout << "\n";
        // Estrella superior parpadeante
        if (frame % 2 == 0) {
            std::cout << YELLOW << "        ★        \n" << RESET;
        } else {
            std::cout << RED << "        ★        \n" << RESET;
        }
        
        // Follaje y luces del árbol (cambian según el fotograma)
        std::cout << GREEN << "       / " << (frame % 2 == 0 ? RED : YELLOW) << "o" << GREEN << " \\       \n" << RESET;
        std::cout << GREEN << "      / " << GREEN << "^" << (frame % 3 == 0 ? BLUE : MAGENTA) << "o" << GREEN << "^ \\      \n" << RESET;
        
        std::cout << GREEN << "     / " << (frame % 2 != 0 ? RED : YELLOW) << "o" << GREEN << "^" << (frame % 2 == 0 ? BLUE : MAGENTA) << "o" << GREEN << "^ \\     \n" << RESET;
        std::cout << GREEN << "    / " << GREEN << "^^" << (frame % 4 == 0 ? RED : BLUE) << "*" << GREEN << "^^^ \\    \n" << RESET;

        std::cout << GREEN << "   / " << (frame % 3 == 0 ? RED : YELLOW) << "o" << GREEN << "^^" << (frame % 2 == 0 ? BLUE : RED) << "o" << GREEN << "^^^" << (frame % 2 != 0 ? YELLOW : MAGENTA) << "o" << GREEN << " \\   \n" << RESET;
        std::cout << GREEN << "  / " << GREEN << "^^^^^" << (frame % 3 == 0 ? RED : YELLOW) << "*" << GREEN << "^^^^^^ \\  \n" << RESET;

        // Tronco del árbol
        std::cout << BROWN << "    |   |    \n" << RESET;
        std::cout << BROWN << "    |   |    \n" << RESET;
        
        // Mensaje inferior
        std::cout << "\n";
        std::cout << RED << "   FELIZ NAVIDAD 🎄\n" << RESET;

        // Velocidad de la animación (300 milisegundos)
        std::this_thread::sleep_for(std::chrono::milliseconds(300));
    }

    return 0;
}