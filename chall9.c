#include <stdio.h>

struct Compte {
    char nom[32];
    int sold ;
};

int sold_modifier(struct Compte *compte) {
    int m = 0;
    printf("Entrer le nom du client : ");
    scanf("%s" , compte->nom);
    printf("Entrer le solde que tu veux ajoute : ");
    scanf("%d" , &m);
    compte->sold += m;
    printf("Le nouvelle sold de %s est %d.\n" , compte->nom , compte->sold);
    return 1;
}
int main() {
    struct Compte compte;
    sold_modifier(&compte);
    return 0;
}