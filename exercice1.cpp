#include <iostream>

using namespace std;

class Vecteur2D {
private:
    double x;
    double y;

public:
    Vecteur2D(double valX = 0.0, double valY = 0.0) {
        x = valX;
        y = valY;
    }
    void afficher() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    Vecteur2D operator+(const Vecteur2D& v) const {
        return Vecteur2D(x + v.x, y + v.y);
    }
};

int main() {
    Vecteur2D v1(3.5, 2.0);
    Vecteur2D v2(1.5, 4.0);
    Vecteur2D v3 = v1 + v2;
    cout << "Vecteur 1 : ";
    v1.afficher();
    cout << "Vecteur 2 : ";
    v2.afficher();
    cout << "Somme du deux vecteurs: ";
    v3.afficher();

    return 0;
}