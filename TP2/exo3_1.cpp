#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	
  ifstream file("test.txt");
  if(!is_open(test.txt)){
    cout << " Erreur, Impossible d'ouvrir le fichier" << endl;  
  return 1; 
  }

  int nbLignes = 0, int nbLettres = 0, int nbMots = 0;
  string ligne;

  while(getline(file,ligne)){
    nbLignes++;

  }

	return 0;
}
