#include <stdio.h>
#include <conio.h>

// Schreiben Sie ein Programm, das maximal 4 Ziffern einer Hexadezimalzahl einliest
// und dann den dezimalen Wert ausgibt. Falls mehr als 4 Ziffern eingegeben werden und das
// letzte Zeichen kein Zeilenumbruch war, dann wird ausgegeben: „Die restlichen Zeichen wurden
// verworfen!“

int main(void)
{
    int a;
    char b;
    printf("Bitte gib eine maximal vierstellige Hexadezimalzahl ein: ");
    scanf("%4X%c",&a,&b);
    if (b == '\n')
    {
        printf("Die Dezimalzahl dazu ist : %d", a);
    }
    else {
        printf("Die restlichen Zahlen wurden verworfen.\nDezimal: %d", a);
    }
    getch();
    return 0;
}
