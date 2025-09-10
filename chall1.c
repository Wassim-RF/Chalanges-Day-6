#include <stdio.h>

struct Person {
    char nom[32];
    char prenom[32];
    int age;
};

int main() {
    struct Person Person;
    printf("Entrer votre nom : ");
    scanf("%s" , Person.nom);
    printf("Entrer votre prenom : ");
    scanf("%s" , Person.prenom);
    printf("Entrer votre age : ");
    scanf("%d" , &Person.age);
    printf("Vous avez %s %s et vous avez %d." , Person.prenom , Person.nom , Person.age);
    return 0;
}