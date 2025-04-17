#include "libs/goods.hpp"
#include <iostream>
#include <string>

// Constructeur
Goods::Goods(const std::string& name, float price, int quantity) : 
name(name), price(price), quantity(quantity) {}

// Getters
std::string Goods::getName() const {
    return name;
}

// Méthode pour afficher les informations
void Goods::display() const {
    std::cout << "Name: " << name << std::endl;
}