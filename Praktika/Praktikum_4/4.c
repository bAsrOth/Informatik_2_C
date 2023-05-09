#include <stdio.h>
#include <conio.h>

int fakultaet(int a)
{
    if (a>=1)
    {
        return a*fakultaet(a-1);
    }
    else return 1;   
}

int main(void)
{
    int zahl,summe = 0;
    printf("Bitte geben sie eine positive Zahl ein: ");
    scanf("%d",&zahl);
    if (zahl > 0)
    {
        summe = fakultaet(zahl);
        printf("Die Fakult„t von %d ist %d", zahl, summe);
        getch();
        return 0;
    }
    if (zahl < 0){
        printf("Die Zahl ist nicht positiv!");
        getch();
        return 0;
    }
    if (zahl == 0)
    {
        printf("Die Fakult„t von 0 ist 1");
        getch();
        return 0;
    }
}
