#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    ifstream file("test.txt");

    if(!file.is_open()){

      cerr << "Erreur : impossible d'ouvrir le fichier." << endl;
      return 1;
      
    }
    
    int nbLignes = 0;
    int nbMots = 0;
    int nbLettres = 0;
    string lignes;

    while(getline(file,lignes)){
      nbLignes++;
      stringstream ss(lignes); // Crée un flux à partir de la ligne
      string mot;
      
      while( ss >> mot){
        nbMots++;
        for(char c : mot){
            if(isalpha(c)){
              nbLettres++;
            }
        }
        

      }

    }

    file.close();
    
    cout << "Etude du fichier" << endl;
    cout << "Nombre de lignes : " << nbLignes << endl;
    cout << "Nombre de mots : " << nbMots << endl;
    cout << "Nombre de lettres : " << nbLettres << endl;





  return 0;
}
