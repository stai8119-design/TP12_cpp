#include <iostream>
#include <string>

using namespace std;

class Produit {
private:
    string nom;
    double prix;
    int quantite;
public:
    Produit(string n, double p, int q) {
        nom = n;
        prix = p;
        quantite = q;
    }
    friend ostream& operator<<(ostream& os, const Produit& prod) {
        os << "Produit : " << prod.nom 
           << " | Prix : " << prod.prix << " DH" 
           << " | Quantite : " << prod.quantite;
        return os;
    }
};

int main() {
    Produit p1("PC Portable", 7500.0, 4);
    Produit p2("Souris Sans Fil", 150.0, 25);
    cout << "Affichage des produits avec cout" << endl;
    cout << p1 << endl;
    cout << p2 << endl;
    return 0;
}