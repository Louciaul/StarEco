#ifndef GOODS_HPP
#define GOODS_HPP

#include <string>

class Goods {
private:
    std::string name;
    float price;
    int quantity;

public:
    // Constructeur
    Goods(const std::string& name, float price, int quantity);

    // Getters
    std::string getName() const;

    // Méthode pour afficher les informations
    void display() const;
};

#endif // GOODS_HPP