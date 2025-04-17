#include "economy/libs/pop.hpp"
#include <iostream>
#include <thread>
#include <chrono>

void wait(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

int main() {
    // Créer une instance de Pop
    Pop pop("Example Name");
    int round = 0;
    while (true) {
        std::cout << "Round: " << round << std::endl;
        wait(1000);
        round++;
    }
    // Afficher les informations de l'instance
    pop.display();

    return 0;
}