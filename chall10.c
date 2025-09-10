#include <stdio.h>
#include <stdlib.h>

struct Employe {
    char nom[32];
    int salaire;
};

int main() {
    int n , i;
    struct Employe *employe;
    printf("Entrer le nombre des employer qui tu veux ajoutez : ");
    scanf("%d" , &n);
    employe = (struct Employe*)malloc(n * sizeof(struct Employe));
    if (employe == NULL) {
        return -1;
    }
    for(i = 0 ; i < n ;  i++) {
        printf("L'employe %d : \n" , i  + 1);
        printf("   Le nom : ");
        scanf("%s" , employe[i].nom);
        printf("   Le salaire : ");
        scanf("%d" , &employe[i].salaire);
    }
    for(i = 0 ; i < n ;  i++) {
        printf("L'employe %d : sont nom est %s est sont salere est %d.\n" , i  + 1 , employe[i].nom , employe[i].salaire);
    }
    free(employe);
    return 0;
}