#include <iostream>


template <typename T> T carre(T valeur) {
    return valeur * valeur;
}

int main() {
    std::cout << "Veuillez saisir une valeur : ";
    
    T valeur;
    std::cin >> valeur;

    T resultat = carre(valeur);

    std::cout << "Le carré de la valeur est : " << resultat << std::endl;
    
    return 0;
}
