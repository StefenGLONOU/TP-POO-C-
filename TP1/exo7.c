#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fonction pour échanger deux entiers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour trier un tableau avec tri à bulles (bubble sort)
void tri_croissant(int tab[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (tab[j] > tab[j+1]) {
                swap(&tab[j], &tab[j+1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplir le tableau avec des valeurs aléatoires (0 à 99)
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
    }

    // Afficher le tableau avant tri
    printf("Tableau avant tri : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Trier le tableau
    tri_croissant(tab, n);

    // Afficher le tableau après tri
    printf("Tableau après tri croissant : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
