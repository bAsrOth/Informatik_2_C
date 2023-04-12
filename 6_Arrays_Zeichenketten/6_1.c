// Befüllen Sie mit einer Schleife jeweils ein Array mit:
// a) den Zahlen von 0 bis 9
// b) den Zahlen von -5 bis +5
// c) den Zahlen von 5.0 bis 1.0 in 0.5er Schritten
// d) mit Buchstaben von 'A' bis 'F'.
// Geben Sie die Werte mit einer zweiten Schleife danach auch wieder aus!

#include <stdio.h>
#include <conio.h>

int main(void)
{
#define anzahl1 10
#define anzahl2 11
#define anzahl3 9
#define anzahl4 6
    int array1[anzahl1];
    int array2[anzahl2], b = -5;
    float array3[anzahl3]; float c= 5.0;
    int array4[anzahl4], a = 65;
    for (int i = 0; i < anzahl1; i++)
    {
        array1[i] = i;
    }
    for (int i = 0; i < anzahl2; i++)
    {
        array2[i] = b;
        b++;
    }
    for (int i = 0; i < anzahl3; i++)
    {
        array3[i] = c;
        c = c - 0.5;
    }
    for (int i = 0; i < anzahl4; i++)
    {
        array4[i]=a;
        a +=1;
    }
    
    // Hier geht das Printen erst los
    for (int i = 0; i < anzahl1; i++)
    {
        printf("%i\t", array1[i]);
    }
    putchar('\n');
    for (int i = 0; i < anzahl2; i++)
    {
        printf("%i\t", array2[i]);
    }
    putchar('\n');
    for (int i = 0; i < anzahl3; i++)
    {
        printf("%.1f\t", array3[i]);
    }
    putchar('\n');
    for (int i = 0; i < anzahl4; i++)
    {
        printf("%c\t", array4[i]);
    }
}
