#include "libs/goods.hpp"
#include <iostream>
#include <string>

// Constructeur
Goods::Goods(const std::string& name, double price, int quantity) : 
name(name), price(price), quantity(quantity) {}

// Getters
std::string Goods::getName() const {
    return name;
}

double Goods::getPrice() const {
    return price;
}
int Goods::getQuantity() const {
    return quantity;
}

// Méthode pour afficher les informations
void Goods::display() const {
    std::cout << "--Display Goods-- " << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
}