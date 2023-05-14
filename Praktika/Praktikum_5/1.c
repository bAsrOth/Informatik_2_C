#include <stdio.h>
#include <conio.h>
#include <math.h>

double logarithmus(double x, double b){
    double loga = log10(x)/log10(b); //log10() benutzt doubles
    return loga;
}

int einlesen(void){
    double zahl =0;
    while (1)
    {
        scanf("%lf",&zahl);
        if (zahl > 0)
        {
            return zahl;
        }
    }
}

int main(void)
{
    printf("Bitte geben sie eine positive Zahl fr einen Logarithmus ein: ");
    double zahl = einlesen();
    printf("Bitte geben sie nun eine positive Basis ein: ");
    double basis = einlesen();
    double erg = logarithmus(zahl,basis);
    printf("Der Logarithmus von %.2lf zur Basis %.2lf ist %.4lf",zahl,basis,erg);
    getch();
    return 0;
}
