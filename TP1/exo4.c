#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int factorial_recursive(int n){
    if(n <= 1){
        return 1;
    }
    return n * factorial_recursive(n-1);
}
int main(){
    // Calcul de n!

    printf("Méthode 1: boucle for\n");
    int n;
    int result=1;
    printf("Donner un nombre entier: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        result *=i;
    }
    printf("%d! = %d\n",n,result);

    printf("Méthode 2: boucle while\n");

    int i = 2;
    result = 1;
    while(i<=n){
        result *=i;
        i++;
    }
    printf("Le factoriel de %d est %d\n", n, result);

    printf(" Méthode 3: fonction récursive\n");
    printf("Le factoriel de %d est %d", n, factorial_recursive(n));

    return 0;
}