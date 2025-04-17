#ifndef SETUP_HPP
#define SETUP_HPP

#include "economy/libs/includes.hpp"
#include "../libs/json.hpp" // Inclure la bibliothèque JSON
#include <iostream>
#include <fstream> // Pour lire les fichiers
#include <filesystem> // Pour afficher le répertoire courant
#include <optional> // Pour utiliser std::optional
#include <cstdlib> // Pour std::exit


using json = nlohmann::json; // Alias pour la bibliothèque JSON

Market setup();

#endif // SETUP_HPP