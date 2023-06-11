// Erstellen Sie ein Programm zur numerischen Integration einer Funktion mit der
// Streifenmethode. Das Programm soll eine Funktion double f(double x) enthalten, die zu
// jedem Wert x einen Funktionswert y liefert.
// Außerdem ist eine Funktion double integral(double a, double b, int n)
// erforderlich. Darin soll das Intervall [a, b] in n kleine Intervalle aufgeteilt werden, die Fläche
// der Rechtecke unter dem Funktionsgraphen berechnet und die Gesamtfläche zurückgeliefert
// werden. Zur Kontrolle ist es nützlich, y(x) und A(x,y) mit 8 Nachkommastellen auszugeben.
// Erste Funktion: f(x) = x         (Sollte 0.5 sein)
// zweite Fkt: f(x) = exp(-x^2)     (Sollte 0.746824 sein)


#include <stdio.h>
#include <conio.h>


double f(double x){
    double a = x;
    return a;
}

double integral(double a, double b, int n){
    double schritt = 1/n;
    double flaeche = 0;
    for (int i = 0; i < n; i++)
    {
        flaeche = (f(i*schritt) * schritt);
        schritt = i+schritt;
        printf("Schritt = %.3f\n", schritt);
        printf("Ergebnis = %.3f\n",flaeche);
    }
    return flaeche;
}


int main(void)
{
    double a = integral(0,2,10);
    printf("%.3f",a);
    return 0;
}
