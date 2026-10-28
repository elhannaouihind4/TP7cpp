#include <iostream>
#include "Contact.hpp"

using namespace std;

int main() {
    Contact c1("Hind");
    Contact c2("Reda", "0612345678");
    Contact c3("Youssef", "0633765018",
               "youssef@gmail.com");

    cout << " CARNET D'ADRESSES " << endl;

    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}



