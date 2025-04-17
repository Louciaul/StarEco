#ifndef POP_HPP
#define POP_HPP

#include <string>

class Pop {
private:
    std::string name;
    std::string job;
    double money;

public:
    // Constructeur
    Pop(const std::string& name, const std::string& job, double money);

    // Getters
    std::string getName() const;
    std::string getJob() const;
    double getMoney() const;

    // Méthode pour afficher les informations
    void display() const;
};

#endif // PERSON_HPP