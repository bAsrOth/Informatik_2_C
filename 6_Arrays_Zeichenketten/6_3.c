#include <stdio.h>
#include <conio.h>

int main(void)
{
    #define laenge 2
    int a,b;
    int array[laenge];
    printf("Bitte geben sie die erste Vektorkoordinate ein: ");
    scanf("%d",&array[0]);
    printf("Bitte geben sie die zweite Vektorkoordinate ein: ");
    scanf("%d",&array[1]);
    printf("Der gespiegelte Vektor ist: {%i , %i}",array[0]*(-1),array[1]*(-1));
}
