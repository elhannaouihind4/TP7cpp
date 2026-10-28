#include "Facture.hpp"
#include <iomanip>

// Version 1 : nom et prix, quantité = 1, TVA = 20 %
void Facture::ajouterArticle(string nom, float prix) {
    Article a = {nom, prix, 1, 20};
    articles.push_back(a);
}

// Version 2 : nom, prix et quantité, TVA = 20 %
void Facture::ajouterArticle(string nom, float prix, int quantite) {
    Article a = {nom, prix, quantite, 20};
    articles.push_back(a);
}

// Version 3 : nom, prix, quantité et TVA
void Facture::ajouterArticle(string nom, float prix,
                             int quantite, float tva) {
    Article a = {nom, prix, quantite, tva};
    articles.push_back(a);
}

// Afficher les articles et calculer le total TTC
void Facture::afficherTotal() const {
    float total = 0;

    cout << fixed << setprecision(2);
    cout << " DETAIL DE LA FACTURE " << endl;

    for (int i = 0; i < articles.size(); i++) {
        float sousTotal = articles[i].prixUnitaire
                        * articles[i].quantite;

        float montantTTC = sousTotal
                         * (1 + articles[i].tauxTVA / 100);

        cout << "Article : " << articles[i].nom << endl;
        cout << "Prix unitaire : "
             << articles[i].prixUnitaire << " DH" << endl;
        cout << "Quantite : " << articles[i].quantite << endl;
        cout << "TVA : " << articles[i].tauxTVA << " %" << endl;
        cout << "Total TTC : " << montantTTC << " DH" << endl;
        cout << "\n" << endl;

        total += montantTTC;
    }

    cout << "TOTAL DE LA FACTURE : "
         << total << " DH" << endl;
}




