#include <stdio.h>
#include <conio.h>
#include <math.h>

// FÅr

int main(void)
{
    // Beliebige Dimension n
    int n, summe = 0;
    printf("Bitte geben sie die Dimension des Vektors ein: ");
    scanf("%d", &n);
    int vektor[n];
    for (int i = 0; i < n; i++)
    {
        printf("%ites Element des Vektors: ", i + 1);
        scanf("%d", &vektor[i]);
        summe += vektor[i] * vektor[i];
    }
    double length = sqrt(summe);
    printf("LÑnge des Vektors: %.3f", length);
    getch();
    return 0;
    // int vektor[2];
    // printf("Bitte geben sie vx ein: ");
    // scanf("%d", &vektor[0]);
    // printf("Bitte geben sie vy ein: ");
    // scanf("%d", &vektor[1]);
    // double length = sqrt((vektor[0] * vektor[0]) + (vektor[1] * vektor[1]));
    // printf("LÑnge des Vektors: %.3f", length);
    // getch();
    // return 0;
}
