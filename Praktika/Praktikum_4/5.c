#include <stdio.h>
#include <conio.h>
#include <math.h>

int fakultaet(int a)
{
    if (a>=1)
    {
        return a*fakultaet(a-1);
    }
    else return 1;   
}

double myexp(int zahl){
    double zahl_db = zahl, hoch;
    double summe = 0;
    for (int i = 0; i <= 10; i++)
    {
        hoch = i;
        summe = summe + (pow(zahl_db,hoch))/fakultaet(i);
    }
    return summe;
}

int main(void)
{
    int eingabe;
    printf("Bitte gib eine Zahl ein dessen e-Wert du wissen willst: ");
    scanf("%d",&eingabe);
    printf("Gerundete exp(%d) ist %.5f.\n",eingabe,myexp(eingabe));
    printf("Genauer Wert exp(%d) ist %.5f.",eingabe,exp(eingabe));
    getch();
    return 0;
}
