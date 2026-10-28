#include "CompteBancaire.hpp"

// Constructeur sans solde initial
CompteBancaire::CompteBancaire()
    : solde(0), codeSecurite(1234) {
}

// Constructeur avec solde initial
CompteBancaire::CompteBancaire(double soldeInitial)
    : solde(0), codeSecurite(1234) {

    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        cout << "Erreur : solde initial invalide."
             << endl;
    }
}

// Afficher le solde
void CompteBancaire::afficherSolde() const {
    cout << "Solde actuel : " << solde << " DH"
         << endl;
}

// Retrait sans code de securite
void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        cout << "Erreur : montant invalide." << endl;
    } else if (montant > solde) {
        cout << "Erreur : solde insuffisant." << endl;
    } else {
        solde -= montant;
        cout << "Retrait effectue : " << montant
             << " DH" << endl;
    }
}

// Retrait avec code de securite
void CompteBancaire::retrait(double montant, int code) {
    if (code != codeSecurite) {
        cout << "Erreur : code de securite incorrect."
             << endl;
    } else if (montant <= 0) {
        cout << "Erreur : montant invalide." << endl;
    } else if (montant > solde) {
        cout << "Erreur : solde insuffisant." << endl;
    } else {
        solde -= montant;
        cout << "Retrait securise effectue : "
             << montant << " DH" << endl;
    }
}




