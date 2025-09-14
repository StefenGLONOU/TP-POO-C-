#include <iostream>
constexpr int multiplier(int x, int y){
    return x*y;
}

using namespace std;
int main(void)
{
int a;
int b;
cout << "Entrez une valeur :" << endl;
cin >> a;
cout << "Entrez une autre valeur :" << endl;
cin >> b;
cout << "Résultat: " << multiplier (a+1, b+1) << endl;
return 0;
}
