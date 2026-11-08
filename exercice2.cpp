#include <iostream>

using namespace std;

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j = 1, int m = 1, int a = 2026) {
        jour = j;
        mois = m;
        annee = a;
    }
    void afficher() const {
        cout << (jour < 10 ? "0" : "") << jour << "/"
             << (mois < 10 ? "0" : "") << mois << "/"
             << annee << endl;
    }
    bool operator==(const Date& d) const {
        return (jour == d.jour && mois == d.mois && annee == d.annee);
    }
    bool operator!=(const Date& d) const {
        return !(*this == d);
    }
};

int main() {
    Date date1(7, 11, 2026);
    Date date2(7, 11, 2026);
    Date date3(25, 12, 2026);

    cout << "Comparaison des dates" << endl;
    
    cout << "Date 1 : ";
    date1.afficher();
    
    cout << "Date 2 : ";
    date2.afficher();
    
    cout << "Date 3 : ";
    date3.afficher();

    cout << "\nTests des operateurs" << endl;
    if (date1 == date2) {
        cout << "Date 1 et Date 2 sont IDENTIQUES." << endl;
    } else {
        cout << "Date 1 et Date 2 sont DIFFERENTES." << endl;
    }
    if (date1 != date3) {
        cout << "Date 1 et Date 3 sont DIFFERENTES." << endl;
    } else {
        cout << "Date 1 et Date 3 sont IDENTIQUES." << endl;
    }

    return 0;
}