#include <stdio.h>
#include <conio.h>

// Schreiben Sie ein C-Programm, das eine doppelt genaue Fließkommazahl einliest.
// Wenn die Zahl ungleich 0 ist, geben Sie den Kehrwert der Zahl aus.

/*int main(void){
    double x;
    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%lf", &x);
    if (x != 0)
    {
        printf("Kehrwert: %lf", 1/x);
        getch();
    }
    return 0;
}*/

//Schreiben Sie ein Standard-C Programm, das zwei kommagetrennte Zahlen einliest, addiert und die Summe wieder ausgibt.

int main(void){
    int a, b;
    printf("Bitte geben sie zwei kommagetrennte Zahlen ein: ");
    scanf("%i,%i", &a,&b);
    printf("%i + %i = %i",a,b,a+b);
    getch();
    return 0;
}