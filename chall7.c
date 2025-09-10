#include <stdio.h>

struct Date {
    int jour;
    int mois;
    int anee;
};

int main() {
    struct Date date;
    int *J = &date.jour;
    int *M = &date.mois;
    int *A = &date.anee;
    printf("Entrer le jour : ");
    scanf("%d" , J);
    printf("Entrer le mois : ");
    scanf("%d" , M);
    printf("Entrer l'anne : ");
    scanf("%d" , A);
    printf("%d/%d/%d" , *J , *M , *A);
    return 0;
}