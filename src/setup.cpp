#include "setup.hpp"

Market setup() {
    // Charger le fichier JSON
    std::cout << "-----------SETUP-----------" << std::endl;
    std::cout << "Current working directory: " << std::filesystem::current_path() << std::endl;
    std::ifstream file("config/goods.json");
    if (!file.is_open()) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier goods.json" << std::endl;
        std::exit(EXIT_FAILURE);
    }
    else {
        std::cout << "Fichier goods.json ouvert avec succès." << std::endl;
    }

    json config;
    file >> config;

    // Lire les paramètres pour Pop
    std::string market_name = "Market_1";

    Market market(market_name);

    for (const auto& good : config["goods"]) {
        std::string goodName = good["name"];
        float goodPrice = good["price"];
        int goodQuantity = good["quantity"];

        market.addGoods(Goods(goodName, goodPrice, goodQuantity));
    }

    // Afficher les informations
    market.display();

    std::cout << "---------------------------" << std::endl;
    std::cout << "Setup completed successfully." << std::endl;
    std::cout << "---------------------------" << std::endl;
    file.close();

    return market;
}