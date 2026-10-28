#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    // Constructeur avec nom uniquement
    Contact(string n);

    // Constructeur avec nom et telephone
    Contact(string n, string t);

    // Constructeur avec nom, telephone et email
    Contact(string n, string t, string e);

    void afficher() const;
};

#endif
