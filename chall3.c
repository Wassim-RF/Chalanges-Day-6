#include <stdio.h>

struct Rectangle {
    int longueur;
    int largeur
};

int rectangle_aire(struct Rectangle rectangle) {
    int aire;
    aire = rectangle.longueur * rectangle.largeur;
    return aire;
}

int main() {
    struct Rectangle rectangle;
    printf("Entrer la longueur du rectangle :  ");
    scanf("%d" , &rectangle.longueur);
    printf("Entrer la longueur du rectangle :  ");
    scanf("%d" , &rectangle.largeur);
    int a = rectangle_aire(rectangle);
    printf("L'aire de votre rectangle est : %d" , a);
    return 0;
}