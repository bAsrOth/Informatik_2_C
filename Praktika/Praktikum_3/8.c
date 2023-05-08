#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(void)
{
    double monate, zins, rate, q, summe = 0;
    printf("Geben sie die monatl. Rate ein: \t");
    scanf("%lf", &rate);
    printf("Geben sie den Zinssatz ein [");
    putchar(37);
    printf("]:\t\t");
    scanf("%lf", &zins);
    printf("Geben sie die Anzahl der Monate ein: \t");
    scanf("%lf", &monate);
    q = 1 + zins / (12 * 100);
    summe = rate * (1 - pow(q, monate)) / ((pow(q, monate)) - (pow(q, monate + 1)));
    printf("Die Kreditsumme mit Zinsen betr„gt: \t%.2f", summe);
    getch();
    return 0;
}
