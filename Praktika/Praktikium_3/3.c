#include <stdio.h>
#include <conio.h>

//Letzte Ziffer einer Ganzzahl
int main(void)
{
    int a;
    printf("Gib eine ganze Zahl ein: ");
    scanf("%d",&a);
    printf("Die letzte Ziffer war: %i",a%10);
    a = a/10;
    printf("\nDie vorletzte Ziffer war: %i",a%10);
    getch();
    return 0;
}