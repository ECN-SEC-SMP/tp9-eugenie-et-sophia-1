// 2- Vecteur de chaines de caractère
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Déclaration d'un vecteur stockant des std::string
    vector<string> mots;

    // Affichage initial de la taille et de la capacité
    cout << "Avant l'ajout des éléments :" << endl;
    cout << "Taille : " << mots.size() << ", Capacité : " << mots.capacity() << endl;

    // Ajout de cinq chaînes de caractères
    mots.push_back("Bonjour");
    mots.push_back("comment");
    mots.push_back("allez");
    mots.push_back("vous");
    mots.push_back("?");

    // Affichage après l'ajout de 5 éléments
    cout << "\nAprès l'ajout des 5 éléments :" << endl;
    cout << "Taille : " << mots.size() << ", Capacité : " << mots.capacity() << endl;

    // Ajout de plusieurs éléments pour observer l'évolution de la capacité
    //for (int i = 0; i < 10; i++) {
      //  mots.push_back("test" + to_string(i));
      //  cout << "Ajout de 'test" << i << "' -> Taille : " << mots.size() << ", Capacité : " << mots.capacity() << endl;
    //}
    // Après la sortie on remarque  que size() : Nombre réel d’éléments dans le vecteur.
    //capacity() : Nombre d’éléments que le vecteur peut stocker avant d’être redimensionné.
    //La capacité augmente exponentiellement pour éviter un redimensionnement fréquent 
    

    // ----------------------Affichage de mots--------------------------------------------------------
    // Méthode 1 : Utilisation d'indices (boucle for classique)
    cout << "Méthode 1 (avec indices) : ";
    for (size_t i = 0; i < mots.size(); i++) {
        cout << mots[i];
        if (i < mots.size() - 1) cout << " "; // Ajout d'un espace sauf pour le dernier élément
    }
    cout << endl;

    //  Méthode 2 : Boucle sur une plage de nombres (range-based loop avec size_t)
    cout << "Méthode 2 (plage dynamique) : ";
    for (size_t i = 0; i < mots.size(); i++) {
        cout << mots[i] << " ";
    }
    cout << endl;

    //  Méthode 3 : Utilisation d'un itérateur
    cout << "Méthode 3 (itérateur) : ";
    for (auto it = mots.begin(); it != mots.end(); ++it) {
        cout << *it;
        if (it + 1 != mots.end()) cout << " "; // Ajout d'un espace sauf pour le dernier élément
    }
    cout << endl;
    //-----------------------------------------------------------------------------------------------

    // ----------------------Affichage de mots--------------------------------------------------------
    //

    return 0;
}

