#include <stdio.h>

struct Produit {
    char nom[32];
    int prix;
    int quantite;
};

int main() {
    int n , i ;
    printf("Entrer le nombre des produit : ");
    scanf("%d" , &n);
    struct Produit produit[n];
    for (i = 0 ; i < n ; i++) {
        printf("Produit %d : \n" , i + 1);
        printf("   Entrer le nom du produit : ");
        scanf("%s" , produit[i].nom);
        printf("   Entrer le prix du produit : ");
        scanf("%d" , &produit[i].prix);
        printf("   Enter la quantite de produit : ");
        scanf("%d" , &produit[i].quantite);
    }
    for (i = 0 ; i < n ; i++) {
        printf("Le produit %d est %s sont prix est %d dh , il reste %d pieces.\n" , i + 1 , produit[i].nom , produit[i].prix , produit[i].quantite);
    }
    return 0;
}