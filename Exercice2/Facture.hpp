#ifndef FACTURE_HPP
#define FACTURE_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Facture {
private:
    struct Article {
        string nom;
        float prixUnitaire;
        int quantite;
        float tauxTVA;
    };

    vector<Article> articles;

public:
    void ajouterArticle(string nom, float prix);
    void ajouterArticle(string nom, float prix, int quantite);
    void ajouterArticle(string nom, float prix,
                        int quantite, float tva);

    void afficherTotal() const;
};

#endif
