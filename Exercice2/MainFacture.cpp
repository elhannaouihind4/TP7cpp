#include <iostream>
#include "Facture.hpp"

using namespace std;

int main() {
    Facture f;

    // Version 1
    f.ajouterArticle("Stylo", 6);

    // Version 2
    f.ajouterArticle("Cahier", 15, 7);

    // Version 3
    f.ajouterArticle("Livre", 150, 4, 8);

    f.afficherTotal();

    return 0;
}



