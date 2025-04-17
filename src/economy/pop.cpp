#include "libs/pop.hpp"
#include <iostream>
#include <string>

// Constructeur
Pop::Pop(const std::string& name, const std::string& job, double money)
    : name(name), job(job), money(money) {}

// Getters
std::string Pop::getName() const {
    return name;
}

// Méthode pour afficher les informations
void Pop::display() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Job: " << job << std::endl;
    std::cout << "Money: " << money << std::endl;
}