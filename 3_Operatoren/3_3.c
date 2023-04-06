#include <stdio.h>
#include <conio.h>

// Schreiben Sie ein C-Programm, das eine doppelt genaue Fließkommazahl einliest.
// Wenn die Zahl ungleich 0 ist, geben Sie den Kehrwert der Zahl aus.

int main(void){
    double x;
    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%lf", &x);
    if (x != 0)
    {
        printf("Kehrwert: %lf", 1/x);
        getch();
    }
    return 0;
}