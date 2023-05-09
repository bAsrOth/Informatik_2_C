#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a,summe = 0;
    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%d",&a);
    for (int i = 1; i <= a+1;)
    {
        summe += i^2;
        i++;
    }
    printf("Die Summe der Quadratzahlen bis zu %d ist %d.",a,summe);
    getch();
    return 0;
}
