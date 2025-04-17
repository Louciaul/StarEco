#ifndef MARKET_HPP
#define MARKET_HPP

#include <string>
#include <vector>
#include "goods.hpp"

class Market {
private:
    std::string name;                  // Nom du marché
    std::vector<Goods> goodsList;      // Liste des biens disponibles sur le marché

public:
    // Constructeur
    Market(const std::string& name);

    // Getter pour le nom du marché
    std::string getName() const;

    // Méthode pour afficher les informations du marché
    void display() const;

    // Méthode pour ajouter un bien au marché
    void addGoods(const Goods& good);

    // Méthode pour obtenir la liste des biens
    const std::vector<Goods>& getGoodsList() const;
};

#endif // MARKET_HPP