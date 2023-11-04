#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

struct Personne {
    string nom;
    string prenom;
    int age;
};

bool comparer_personnes(const Personne& personne1, const Personne& personne2) {
    if (personne1.nom != personne2.nom) {
        return personne1.nom < personne2.nom;
    }
    return personne1.prenom < personne2.prenom;
}


int main() {
    Personne personne1;
    list<Personne> list1;

    int taille;

    cout << "saisez combien personnes : ";
    cin >> taille;

    for (int i=0; i<taille; i++) {
    cout << "\n\n\n================== Personne " << i+1 << " ================== " << endl;
    cout << "saisez le prenom  : ";
    cin >> personne1.prenom;   
    cout << "saisez le nom  : ";
    cin >> personne1.nom;    
    cout << "saisez l'age  : ";
    cin >> personne1.age;      
    list1.push_back(personne1);
    }

    list1.sort(comparer_personnes);

    for (const Personne& personne1 : list1) {
        std::cout << "Nom: " << personne1.nom << ", Prenom: " << personne1.prenom << ", age: " << personne1.age << " ans" << std::endl;
    }




    return 0;
}