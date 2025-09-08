#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int a,b,c;
    printf("////Calcul des racines d'une équation du second degré ax²+bx+c=0//////\n");
    printf("Entrez la valeur de a: ");
    scanf("%d",&a);
    printf("Entrez la valeur de b: ");
    scanf("%d",&b);
    printf("Entrez la valeur de c: ");
    scanf("%d",&c);
    float discriminant;

    discriminant = b*b - 4*a*c;

    if(discriminant>0){
        double x1,x2;
        x1=(-b + sqrt(discriminant))/(2.0*a);
        x2=(-b - sqrt(discriminant))/(2.0*a);

        printf("%dx²+%dx+%d=0 admet deux racines distinctes x1 = %lf et x2 = %lf\n",a,b,c,x1,x2);
    }
    else if(discriminant==0){
        int x3;
        x3 = -b/(2.0*a);
        printf("%dx²+%dx+%d=0 admet une racine double x = %d\n",a,b,c,x3);
    }
    else{
        printf("Discriminant négatif, cette équation n'admet pas de racines\n");
    }
       

    return 0;
}