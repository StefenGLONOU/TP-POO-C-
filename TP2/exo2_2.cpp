#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    const int taille = 10;

    // En tête
    cout << setw(4) << " ";
    for(int i=1; i <=taille; i++){
	    cout << setw(4) << i;
    }
    cout << endl;

    // Ligne de séparation
    cout << setw(4) << "----";
    for(int i = 1; i<=taille; i++){
	    cout << setw(4) << "----";

    }
    cout << endl;

    // Corps de la table
    for(int i=1; i<=taille; i++){
	    cout << setw(4) << i << "|";
	    for(int j=1; j<=taille; j++){
		    cout << setw(4) << i*j;
	    }
	    cout << endl;
    }


    return 0;
}
