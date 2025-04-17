#include "libs/market.hpp"
#include <iostream>

// Constructeur
Market::Market(const std::string& name) : name(name) {}

// Getter pour le nom du marché
std::string Market::getName() const {
    return name;
}

// Méthode pour afficher les informations du marché
void Market::display() const {
    std::cout << "Market Name: " << name << std::endl;
    std::cout << "Goods available:" << std::endl;

    for (const auto& good : goodsList) {
        good.display(); // Appelle la méthode display() de Goods
    }
}

// Méthode pour ajouter un bien au marché
void Market::addGoods(const Goods& good) {
    goodsList.push_back(good);
}

// Méthode pour obtenir la liste des biens
const std::vector<Goods>& Market::getGoodsList() const {
    return goodsList;
}