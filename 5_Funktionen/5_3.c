// Schreiben Sie ein C-Programm, das mit Hilfe einer Funktion zunÃ¤chst eine ganze
// Zahl einliest. Dann soll die FakultÃ¤t dieser Zahl (1*2*3*â€¦*zahl) berechnet werden.
// Schlieálich soll mit einer Funktion diese Zahl sowie das Ergebnisses ausgegeben
// werden

#include <stdio.h>
#include <conio.h>

int einlesen(){
    int a = 0;
    printf("Bitte geben sie eine ganze Zahl ein: ");
    scanf("%i",&a);
    return a;
}

int fakultaet(int a)
{
    if (a>=1)
    {
        return a*fakultaet(a-1);
    }
    else
        return 1;
    
}


int main(void)
{
    int a = einlesen();
    printf("Die Fakult„t von %i ist %i", a, fakultaet(a));
    return 0;
}
