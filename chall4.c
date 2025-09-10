#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point point;
    printf("Entrer la point x : ");
    scanf("%d" , &point.x);
    printf("Entrer la point y : ");
    scanf("%d" , &point.y);
    int *X = &point.x;
    int *Y =  &point.y;
    *X = 100;
    *Y = 100;
    printf("Votre point X est %d et Y est %d." , *X , *Y);
    return 0;
}