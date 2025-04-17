#include "libs/pop.hpp"
#include <iostream>
#include <string>

// Constructeur
Pop::Pop(const std::string& name) : name(name) {}

// Getters
std::string Pop::getName() const {
    return name;
}

// Méthode pour afficher les informations
void Pop::display() const {
    std::cout << "Name: " << name << std::endl;
}