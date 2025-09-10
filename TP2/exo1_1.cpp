#include <iostream>


using namespace std;

int main(){

    int nombre;

    cout << "Entrer un nombre dont vous voulez la table de multiplication" << endl;
    cin >> nombre;

    for(int i=1; i<=9; i++){

        cout << nombre << "*" << i << " = " << nombre*i << endl;
    }


    return 0;
}