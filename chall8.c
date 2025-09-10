#include <stdio.h>
#include <math.h>
#define PI 3.14

struct Cercle {
    int rayon;
};

float cercle_aire(struct Cercle cercle) {
    printf("Entrer le rayon du cercle :  ");
    scanf("%d" , &cercle.rayon);
    float aire;
    aire = PI * pow(cercle.rayon , 2);
    printf("L'aire de votre rectangle est : %.2f" , aire);
    return aire;
}

int main() {
    struct Cercle cercle;
    
    cercle_aire(cercle);
    return 0;
}