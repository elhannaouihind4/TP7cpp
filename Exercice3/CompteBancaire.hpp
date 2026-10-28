#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP

#include <iostream>
using namespace std;

class CompteBancaire {
private:
    double solde;
    int codeSecurite;

public:
    // Constructeur sans solde initial
    CompteBancaire();

    // Constructeur avec solde initial
    CompteBancaire(double soldeInitial);

    void afficherSolde() const;

    // Retrait sans code de securite
    void retrait(double montant);

    // Retrait avec code de securite
    void retrait(double montant, int code);
};

#endif
