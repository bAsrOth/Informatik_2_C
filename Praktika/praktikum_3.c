#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

// #define mwst 0.19
// int main(void)
// {
//     // Makroprogramme mit #define
//     float netto, brutto;
//     printf("Bitte geben sie einen Netto-Betrag ein: ");
//     scanf("%f",&netto);
//     printf("Das sind brutto %.2f (inkl. %.2f MwSt)",(netto+netto*mwst),netto*mwst);
//     return 0;
// }

//Letzte Ziffer einer Ganzzahl
int main(void)
{
    int a,b=10;
    printf("Gib eine ganze Zahl ein: ");
    scanf("%d",&a);
    printf("Die letzte Ziffer war: %i",a%b);
    int c = a/10;
    printf("\nDie vorletzte Ziffer war: %i",c%b);
    getch();
    return 0;
}

// int main(void)
// {
//     int sekunden, minuten, stunden;
//     printf("Geben sie eine Anzahl von Sekunden ein: ");
//     scanf("%d",&sekunden);
//     minuten = sekunden/60 % 60;
//     stunden = (sekunden /60/60) % 60;
//     printf("Stunden: \t%i\n",stunden);
//     printf("Minuten: \t%i\n",minuten);
//     printf("Sekunden: \t%i\n",sekunden);
//     return 0;
// }

// int main(void)
// {
//     srand(time(NULL));
//     int random_number_1 = rand() % 10 + 1;
//     int random_number_2 = rand() % 10 + 1;
//     int ergebnis = random_number_1 *random_number_2, eingabe;
//     while (1)
//     {
//         printf("Was ist %i * %i = ",random_number_1,random_number_2);
//         scanf("%d",&eingabe);
//         if (eingabe == ergebnis)
//         {
//             printf("Das Ergebnis ist: %i * %i = %i", random_number_1,random_number_2, eingabe);
//             break;
//         }

//     }
//     return 0;
// }

// int main(void)
// {
//     srand(time(NULL));
//     int random_number_1 = rand() % 100 + 1, eingabe,versuche=0;
//     while (1)
//     {
//         printf("Erraten sie die Zahl zwischen 1 und 100: ", random_number_1);
//         scanf("%d", &eingabe);
//         if (eingabe > random_number_1)
//         {
//             printf("Zu gross!\n");
//             versuche += 1;
//         }
//         else if (eingabe < random_number_1)
//         {
//             printf("Zu klein!\n");
//             versuche += 1;
//         }
//         else if (eingabe == random_number_1)
//         {
//             printf("Richtig!\n");
//             versuche += 1;
//             printf("Anzahl der Versuche: %i\n", versuche);
//             break;
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     int zahl,bit;
//     printf("Bitte geben sie eine Zahl (0..255) ein: ");
//     scanf("%d",&zahl);

//     int bit1 = zahl/2 % 2;
//     int bit2 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit3 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit4 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit5 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit6 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit7 = zahl/2 % 2;
//     zahl = zahl /2;
//     int bit8 = zahl/2 % 2;
//     printf("%i%i%i%i %i%i%i%i",bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1);
//     // bit = zahl/2 % 2;
//     // zahl = zahl /2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);

//     // bit = zahl%2;
//     // zahl /= 2;
//     // printf("%i",bit);
//     return 0;
// }

// int main(void)
// {
//     double monate, zins, rate, q, summe = 0;
//     printf("Geben sie die monatl. Rate ein: \t");
//     scanf("%lf", &rate);
//     printf("Geben sie den Zinssatz ein [");
//     putchar(37);
//     printf("]:\t\t");
//     scanf("%lf", &zins);
//     printf("Geben sie die Anzahl der Monate ein: \t");
//     scanf("%lf", &monate);
//     q = 1 + zins / (12 * 100);
//     summe = rate * (1 - pow(q, monate)) / ((pow(q, monate)) - (pow(q, monate + 1)));
//     printf("Die Kreditsumme mit Zinsen betr„gt: \t%.2f", summe);
//     return 0;
// }
