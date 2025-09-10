#include <stdio.h>

struct Etudiant {
    char nom[32];
    char prenom[32];
    int note[3];
};

int main() {
    int n , i , j;
    printf("Entrer le nombre des etudion : ");
    scanf("%d" , &n);
    struct Etudiant Etudiant[n];
    for (i = 0 ; i < n ; i++) {
        printf("Entrer le nom : ");
        scanf("%s" , Etudiant[i].nom);
        printf("Entrer le prenom : ");
        scanf("%s" , Etudiant[i].prenom);
        printf("Enter notes : \n");
        for(j = 0 ; j < 3 ; j++) {
            printf("   %d  : " , j + 1);
            scanf("%d" , &Etudiant[i].note[j]);
        }
    }
    for (i = 0 ; i < n ; i++) {
        printf("%s %s.\n" , Etudiant[i].nom , Etudiant[i].prenom);
        printf("Les notes : \n");
        for(j = 0 ; j < 3 ; j++) {
            printf("   %d  : %d\n" , j + 1 , Etudiant[i].note[j]);
        }
    }
    return 0;
}