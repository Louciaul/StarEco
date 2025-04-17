#ifndef POP_HPP
#define POP_HPP

#include <string>

class Pop {
private:
    std::string name;

public:
    // Constructeur
    Pop(const std::string& name);

    // Getters
    std::string getName() const;

    // Méthode pour afficher les informations
    void display() const;
};

#endif // PERSON_HPP