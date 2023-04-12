// Schreiben Sie ein C-Programm, das einen Nettopreis einliest und in einer Funktion
// nach main() den Bruttopreis berechnet und dann ausgibt!
#include <stdio.h>
#include <conio.h>

double brutto(double a);

int main(void)
{
    double a = 0;
    printf("Bitte geben sie einen Netto-Preis ein: ");
    scanf("%lf", &a);
    double b = brutto(a);
    printf("Das ist der Brutto-Preis: %.3f",b);
    return 0;
}

double brutto(double a){
    double b = a - a*0.19;
    return b;
}