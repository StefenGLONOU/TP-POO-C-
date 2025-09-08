#include <stdio.h>
#include <stdlib.h>


char minuscule(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); // conversion en minuscule
    }
    return c; // si déjà minuscule ou non lettre
}

int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);

    printf("Minuscule : %c\n", minuscule(c));
    return 0;
}
