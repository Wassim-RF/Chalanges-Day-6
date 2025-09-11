#include <stdio.h>

typedef struct Noeud {
    int valeur;
    struct Noeud *gauche;
    struct Noeud *droit;
} noeud;


int main() {
    noeud n1, n2, n3;

    n1.valeur = 1;
    n2.valeur = 2;
    n3.valeur = 3;

    n1.gauche = &n2;  
    n1.droit  = &n3;   
    n2.gauche = NULL;  
    n2.droit  = NULL;
    n3.gauche = NULL; 
    n3.droit  = NULL;

    printf("Parcours prefixe: ");
    printf("%d ", n1.valeur); 
    printf("%d ", n2.valeur);   
    printf("%d ", n3.valeur);   

    return 0;
}
