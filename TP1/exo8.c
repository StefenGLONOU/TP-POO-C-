#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void swap( int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    
}


int main(){

    int n,m;
    printf("Donner le nombre de lignes n du tableau: ");
    scanf("%d",&n);
    printf("Donner le nombre de colonnes m du tableau: ");
    scanf("%d",&m);



    int *tab = malloc( n*m*sizeof(int));

    if(tab == NULL){
        printf("Echec de l'allocation mémoire\n");
        return 1;
    }

    srand(time(NULL));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab[i*m +j] = rand() % 100; 
        }
    }
    //Affichage
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",tab[i*m +j]);
        }
        printf("\n");
    }

    free(tab);

    return 0;
}