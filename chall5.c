#include <stdio.h>

struct Livre {
    char titre[100];
    char auteur[100];
    int anee;
};
struct Livre livres() {
    struct Livre livre;
    printf("Enter la titre de livre : ");
    scanf("%s" , livre.titre);
    printf("Enter l'auteur de livre : ");
    scanf("%s" , livre.auteur);
    printf("Enter l'anee de production de livre : ");
    scanf("%d" , &livre.anee);
    return livre;
}

int main() {
    struct Livre livre = livres();
    printf("Le livre %s qui ecrit par %s ecrit dans %d." , livre.titre , livre.auteur , livre.anee);
    return 0;
}