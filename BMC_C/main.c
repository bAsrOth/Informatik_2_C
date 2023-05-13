#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

enum DNABase
{
    A,
    C,
    G,
    T
};

/**
 * @brief Funktion die nur die Tasteneingaben a,A,c,C,g,G,t,T und 'ENTER' zulÑsst, auf dem Bildschirm werden nur A C G T ausgegeben, nichts anderes
 *
 * @return char returned den eingegebenen Character
 */
char getDNABase(void)
{
    int eingabe_ASCII, breaker_var = 0; // Variablen fÅr die getch()-Eingabe und die Variable zum beenden der Schleife
    char ausgabe;
    while (breaker_var == 0)
    {
        eingabe_ASCII = getch();                        // Eingabe durch den Benutzer und umwandeln in ASCII-Wert
        if (eingabe_ASCII == 65 || eingabe_ASCII == 97) // Vergleich des ASCII-Werts, hier fÅr 'a' und 'A'
        {
            breaker_var = 1; // Unterbrechen der While-Schleife durch setzen einer 1
            putchar(65);     // Ausgabe des Chars in der Konsole
            return 'A';      // Ausgabe der Funktion in Form des korrekten chars
        }
        if (eingabe_ASCII == 67 || eingabe_ASCII == 99) // Fall Eingabe = 'c' oder 'C'
        {
            breaker_var = 1;
            putchar(67);
            return 'C';
        }
        if (eingabe_ASCII == 71 || eingabe_ASCII == 103) // Fall Eingabe = 'g' oder 'G'
        {
            breaker_var = 1;
            putchar(71);
            return 'G';
        }
        if (eingabe_ASCII == 84 || eingabe_ASCII == 116) // Fall Eingabe = 't' oder 'T'
        {
            breaker_var = 1;
            putchar(84);
            return 'T';
        }
        if (eingabe_ASCII == 10 || eingabe_ASCII == 13) // Fall Eingabe = 13 oder 10
        {
            breaker_var = 1;
            return '\n';
        }
        else
        {
            breaker_var = 0;
            putchar(7);
        }
    }
    return 0;
}
/**
 * @brief Die Funktion liest Basen vom Benutzer ein und speichert sie in einem Array ab, dabei muss die Gesamtanzahl durch 3 teilbar sein, aufgrund von den Triplets
 *
 * @param seq Eingabe eines Char-Arrays zur Speicherung von DNA-Basen-Kombinationen
 * @return int Char-Array mit den gespeicherten Basen, durch 3 teilbar
 */
int getDNASequence(char seq[])
{
    int counter = 0;
    int breaker = 1;  // Breaker Variable zum beenden der While-Schleife,
    int position = 0; // Positions-Variable zum Navigieren im char-Array
    char eingabe;     // Eingabe durch getDNABase()
    while (1)
    {
        eingabe = getDNABase();

        if (eingabe == '\n' && counter % 3 == 0)
        {
            return counter;
            break;
        }
        else if (eingabe == 'A' || eingabe == 'C' || eingabe == 'G' || eingabe == 'T')
        {
            seq[position] = eingabe;
            counter++;
            position++;
        }
    }
    return 0;
}

unsigned char encode(char seq[]);

int main(void)
{

    char test[1];
    int zahl = getDNASequence(test);
    return 0;
}
