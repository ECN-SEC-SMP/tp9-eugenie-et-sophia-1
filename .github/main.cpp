//Sophia Eugenie TP9 SMP 

//1 - Vecteurs d'entiers
#include <vector> 
#include <iostream> 

using namespace std;

int main() { 
    //déclaration du vecteur d'entiers
    vector<int> v1(3, 0); // Crée un vecteur de taille 3 rempli de 0
    v1[0] = 5; // Affecte 5 à la première case
    v1[1] = 2; // Affecte 3 à la deuxième case
    v1[2] = 3; // Affecte 3 à la troisieme case

    //Parcourir et afficher avec des indices
    cout << "v1 methode indices  : ";
    for(int i(0) ; i< v1.size() ; i++){
        cout << v1[i]<< ' ' ;
    }

    //Parcourir et afficher avec une boucle sur une plage de nombres (C++11)
    cout << '\n';
    cout << "v1 methode forrange  : ";
    for (auto i : v1) // access by value, the type of i is int
        cout << i << ' ';
    //cout << '\n';		

    //ajoutez un nouvel élément en fin de vecteur avec vérifiez que la taille a été modifiée
    v1.push_back(1);
    cout << '\n';
    cout << "v1 avec ajout nouvel element  : ";
    for(int i(0) ; i< v1.size() ; i++){
        cout << v1[i]<< ' ';
    }

    //copiez le premier vecteur dans d’autres vecteurs en utilisant copy et/ou assign
    //1- on déclare un autre vecteur v2
    vector<int> v2;
    //2- copie du premier vecteur v1 dans v2 en utilisant copy
    v2.assign(v1.begin(), v1.end()); // Copie de v1 dans v2
    //3- affichage de v2 copie de v1
    cout << '\n';
    cout << "v2 copie de v1 : ";
    for (auto &&i : v2)
    {
        cout << i << ' ';
    }
    
}
