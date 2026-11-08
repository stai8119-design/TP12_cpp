#include <iostream>
#include <exception>

using namespace std;
class Tableau {
private:
    int* data;
    int taille;

public:
    Tableau(int t) {
        taille = t;
        data = new int[taille];
        for(int i = 0; i < taille; i++) {
            data[i] = 0;
        }
    }
    ~Tableau() {
        delete[] data;
    }
    int& operator[](int index) {
        if (index < 0 || index >= taille) {
            throw out_of_range("Erreur : Index hors des limites du tableau");
        }
        return data[index];
    }
    const int& operator[](int index) const {
        if (index < 0 || index >= taille) {
            throw out_of_range("Erreur : Index hors des limites du tableau");
        }
        return data[index];
    }
    void afficher() const {
        cout << "[ ";
        for(int i = 0; i < taille; i++) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }
    int getTaille() const {
        return taille;
    }
};

int main() {
    try {
        int n = 5;
        Tableau t(n);

        cout << "Test d'affectation et d'affichage" << endl;
        for(int i = 0; i < n; i++) {
            t[i] = (i + 1) * 10;
        }
        cout << "Contenu du tableau t : ";
        t.afficher();

        cout << "\nTest d'acces valide" << endl;
        cout << "Element a l'index 2 : " << t[2] << endl;

        cout << "\nTest de gestion des exceptions" << endl;
        cout << "Tentative d'acceder a l'index 10..." << endl;
        t[10] = 99;

    } catch (const exception& e) {
        cout << "Exception attrapee : " << e.what() << endl;
    }

    return 0;
}