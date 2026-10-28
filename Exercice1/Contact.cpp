#include "Contact.hpp"

// Constructeur 1 : nom uniquement
Contact::Contact(string n) {
    nom = n;
    telephone = "Non renseigne";
    email = "Non renseigne";
}

// Constructeur 2 : nom et telephone
Contact::Contact(string n, string t) {
    nom = n;
    telephone = t;
    email = "Non renseigne";
}

// Constructeur 3 : nom, telephone et email
Contact::Contact(string n, string t, string e) {
    nom = n;
    telephone = t;
    email = e;
}

// Afficher les informations
void Contact::afficher() const {
    cout << "Nom : " << nom << endl;
    cout << "Telephone : " << telephone << endl;
    cout << "Email : " << email << endl;
    cout << "\n" << endl;
}



