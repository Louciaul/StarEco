#ifndef GOODS_HPP
#define GOODS_HPP

#include <string>

class Goods {
private:
    std::string name;
    double price;
    int quantity;

public:
    // Constructeur
    Goods(const std::string& name, double price, int quantity);

    // Getters
    std::string getName() const;

    double getPrice() const;

    int getQuantity() const;

    // Méthode pour afficher les informations
    void display() const;
};

#endif // GOODS_HPP