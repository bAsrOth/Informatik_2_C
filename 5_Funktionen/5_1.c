// Aufgabe 5.1.: Beispiel für die Benutzung von Funktionen:
// a) Schreiben Sie ein C-Programm, in welchem Sie eine Funktion definieren, die
// einen Zeilenumbruch in der Ausgabe erzeugt.
// b) Eine weitere Funktion soll eine übergebene Postleitzahl ausgeben.
// c) Eine dritte Funktion soll eine beliebige Anzahl eines übergebenen Zeichens
// sowie einen Zeilenumbruch ausgeben (Argumente sind: Anzahl, Zeichen).
// d) Nutzen Sie alle drei Funktionen in einer Hauptfunktion, um folgende Ausgabe
// zu generieren:
// ----------------------------------
// Die Postleitzahl ist 80333
// ==================================

#include <conio.h>
#include <stdio.h>

char zeilenumbruch(void)
{
    putchar('\n');
    return 0;
}

char zeichenausgabe(int a, char b)
{
    for (int i = 0; i < a ; i++)
    {
        putchar(b);
    }
}

int postleitzahl(int a)
{
    printf("Die Postleitzahl ist %i",a);
    return 0;
}

int main(void)
{
    int zahl_1 = 80333, zahl_2 = 40;
    char a = '-', b = '=';
    zeichenausgabe(zahl_2,a);
    zeilenumbruch();
    postleitzahl(zahl_1);
    zeilenumbruch();
    zeichenausgabe(zahl_2,b);
    getch();
    return 0;
}
