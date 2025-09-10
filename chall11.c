#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    float note;
    struct Etudiant *suivant;
};

struct Etudiant* ajouterEtudiant(struct Etudiant *tete, char nom[], float note) {
    struct Etudiant *nouveau = (struct Etudiant*) malloc(sizeof(struct Etudiant));
    if (nouveau == NULL) {
        printf("Erreur d'allocation mémoire!\n");
        return tete;
    }
    strcpy(nouveau->nom, nom);
    nouveau->note = note;
    nouveau->suivant = NULL;

    if (tete == NULL) {
        return nouveau;
    }
    struct Etudiant *temp = tete;
    while (temp->suivant != NULL) {
        temp = temp->suivant;
    }
    temp->suivant = nouveau;

    return tete;
}
void afficherListe(struct Etudiant *tete) {
    if (tete == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    struct Etudiant *temp = tete;
    while (temp != NULL) {
        printf("Nom: %s | Note: %.2f\n", temp->nom, temp->note);
        temp = temp->suivant;
    }
}

int main() {
    struct Etudiant *liste = NULL;

    liste = ajouterEtudiant(liste, "Ali", 15.5);
    liste = ajouterEtudiant(liste, "Sara", 17.0);
    liste = ajouterEtudiant(liste, "Omar", 12.75);
    printf("Liste des étudiants :\n");
    afficherListe(liste);

    return 0;
}
