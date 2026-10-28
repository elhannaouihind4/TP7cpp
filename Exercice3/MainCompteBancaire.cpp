#include <iostream>
#include "CompteBancaire.hpp"

using namespace std;

int main() {
    // Compte sans solde initial
    CompteBancaire c1;

    // Compte avec un solde initial de 2000 DH
    CompteBancaire c2(2000);

    cout << " COMPTE 1 " << endl;
    c1.afficherSolde();

    cout << "\n COMPTE 2 " << endl;
    c2.afficherSolde();

    cout << "\n RETRAIT SANS CODE " << endl;
    c2.retrait(500);
    c2.afficherSolde();

    cout << "\n RETRAIT AVEC CODE CORRECT " << endl;
    c2.retrait(400, 1234);
    c2.afficherSolde();

    cout << "\n RETRAIT AVEC CODE INCORRECT " << endl;
    c2.retrait(200, 9999);
    c2.afficherSolde();

    cout << "\n RETRAIT SUPERIEUR AU SOLDE " << endl;
    c2.retrait(6000, 1234);
    c2.afficherSolde();

    return 0;
}



