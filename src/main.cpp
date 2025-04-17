#include "economy/libs/includes.hpp"
#include "setup.hpp"
#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>
#include <SFML/Graphics.hpp>

void wait(int milliseconds) {
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

// Fonction pour créer un texte SFML
sf::Text createText(const std::string& content, const sf::Font& font, unsigned int size, float x, float y) {
    sf::Text text;
    text.setFont(font);
    text.setString(content);
    text.setCharacterSize(size);
    text.setFillColor(sf::Color::White);
    text.setPosition(x, y);
    return text;
}

int main() {
    Market market = setup();
    // Créer une instance de Pop
    sf::RenderWindow window(sf::VideoMode(800, 600), "Tableau en temps réel");

    // Charger une police pour afficher du texte
    sf::Font font;
    if (!font.loadFromFile("assets/fonts/Ubuntu-M.ttf")) {
        std::cerr << "Erreur : Impossible de charger la police ubuntu.ttf" << std::endl;
        return 1;
    }

    Pop pop("Example Name", "Example Job", 1000.0);
    int round = 0;
    while (window.isOpen()) {
        sf::Event event;

        if (event.type == sf::Event::Closed) {
            window.close();
            break;
        }

        // Effacer la fenêtre
        window.clear(sf::Color::Black);

        // Préparer le tableau
        std::vector<std::vector<std::string>> table;
        table.push_back({"Name", "Price", "Quantity"}); // En-têtes du tableau

        // Ajouter les biens du marché au tableau
        for (const auto& good : market.getGoodsList()) {
            table.push_back({
                good.getName(),
                std::to_string(good.getPrice()),
                std::to_string(good.getQuantity())
            });
        }

        // Afficher le tableau
        float startX = 50.0f; // Position de départ en X
        float startY = 50.0f; // Position de départ en Y
        float cellWidth = 150.0f; // Largeur des cellules
        float cellHeight = 50.0f; // Hauteur des cellules

        for (size_t i = 0; i < table.size(); ++i) {
            for (size_t j = 0; j < table[i].size(); ++j) {
                sf::Text cellText = createText(table[i][j], font, 20, startX + j * cellWidth, startY + i * cellHeight);
                window.draw(cellText);
            }
        }

        // Afficher le contenu de la fenêtre
        window.display();

        std::cout << "Round: " << round << std::endl;
        wait(1000);
        round++;
    }
    // Afficher les informations de l'instance
    pop.display();

    return 0;
}