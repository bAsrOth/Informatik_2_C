#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/**
 * @brief Funktion die nur die Tasteneingaben a,A,c,C,g,G,t,T und 'ENTER' zulässt, auf dem Bildschirm werden nur A C G T ausgegeben, nichts anderes
 *
 * @return char returned den eingegebenen Character
 */
char getDNABase()
{
    int eingabe_ASCII, breaker_var = 0; // Variablen für die getch()-Eingabe und die Variable zum beenden der Schleife
    char ausgabe;
    while (breaker_var == 0)
    {
        eingabe_ASCII = getch();                        // Eingabe durch den Benutzer und umwandeln in ASCII-Wert
        if (eingabe_ASCII == 65 || eingabe_ASCII == 97) // Vergleich des ASCII-Werts, hier für 'a' und 'A'
        {
            breaker_var = 1; // Unterbrechen der While-Schleife durch setzen einer 0
            char ausgabe = 'A';
            putchar(65);      // Ausgabe des Chars in der Konsole
            return (ausgabe); // Ausgabe der Funktion in Form des korrekten chars
        }
        if (eingabe_ASCII == 67 || eingabe_ASCII == 99) // Fall Eingabe = 'c' oder 'C'
        {
            breaker_var = 1;
            char ausgabe = 'C';
            putchar(67);
            return (ausgabe);
        }
        if (eingabe_ASCII == 71 || eingabe_ASCII == 103) // Fall Eingabe = 'g' oder 'G'
        {
            breaker_var = 1;
            char ausgabe = 'G';
            putchar(71);
            return ('a');
        }
        if (eingabe_ASCII == 84 || eingabe_ASCII == 116) // Fall Eingabe = 't' oder 'T'
        {
            breaker_var = 1;
            char ausgabe = 'T';
            putchar(84);
            return ('a');
        }
        if (eingabe_ASCII == 10 || eingabe_ASCII == 13) // Fall Eingabe = 13 oder 10
        {
            breaker_var = 1;
            char ausgabe = '\n';
            return ausgabe;
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
    int breaker = 1;  // Breaker Variable zum beenden der While-Schleife,
    int position = 0; // Positions-Variable zum Navigieren im char-Array
    char eingabe;     // Eingabe durch getDNABase()
    while (breaker == 1)
    {
        eingabe = getDNABase();
        if (eingabe == 'A' || eingabe == 'C' || eingabe == 'G' || eingabe == 'T') // Vergleich mit allen gültigen Returns aus getDNABase
        {
            seq[position] = eingabe; // Einsetzen in char-Array
            position = position + 1; // Ein Schritt weiter im Array
            breaker = 1;
        }
        if (eingabe = '\n')
        {                                      // wenn der Benutzer 'ENTER' drückt
            int groesse_seq = sizeof(seq) + 1; // Größe des Arrays als int
            int teilbar = groesse_seq % 3;     // Rest bei Teilung durch 3 (möglich: 0,1,2)
            if (teilbar == NULL)
            {
                break;      // Alles gut und beenden der Schleife
                return seq; // returnen des char-Arrays
            }
            else if (teilbar == 1) // Fall 1
            {
                seq[position + 1] = getDNABase();
                break;
                return seq;
            }
            else if (teilbar == 2)
            {
                seq[position + 1] = getDNABase(); // WICHTIG: Aktuell wird 'ENTER' mit eingespeichert
                seq[position + 2] = getDNABase();
                break;
                return seq;
            }
        }
    }
    return 0;
}

int main(void)
{
    char *test;
    test = (char *)calloc(1000, sizeof(char));
    // char test[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    getDNASequence(test);
    getch();
    return 0;
}
