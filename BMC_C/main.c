#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_UNKODIERT 3000
#define MAX_KODIERT 1000
#define MAX_GENOM 1000

enum DNABase
{
    A = 'A',
    C = 'C',
    G = 'G',
    T = 'T'
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

/**
 * @brief Funktion verschlÅsselt ein Codon mit Bits, Bsp: Leerer unsigned char: 00 00 00 00 = "AGT" = 00 11 10 00
 *
 * @param seq öbergabe eines Codon-Strings
 * @return unsigned char Ausgabe des verschlÅsselten Char
 */
unsigned char encode(char seq[])
{

    int bit_A = 0;
    int bit_C = 1;
    int bit_G = 2;
    int bit_T = 3;
    unsigned char ausgabe = 0;

    for (int i = 0; i < 3; i++)
    {
        switch (seq[i])
        {
        case A:
            ausgabe |= bit_A;
            break;
        case C:
            ausgabe |= bit_C;
            break;
        case G:
            ausgabe |= bit_G;
            break;
        case T:
            ausgabe |= bit_T;
            break;
        }
        bit_A = bit_A << 2;
        bit_C = bit_C << 2;
        bit_G = bit_G << 2;
        bit_T = bit_T << 2;
    }
    // 0 (00 00 00 00) -> 0  (00 00 00 00) -> 0  (00 00 00 00) -> bit_A
    // 1 (00 00 00 01) -> 4  (00 00 01 00) -> 16 (00 01 00 00) -> bit_C
    // 2 (00 00 00 10) -> 8  (00 00 10 00) -> 32 (00 10 00 00) -> bit_G
    // 3 (00 00 00 11) -> 12 (00 00 11 00) -> 48 (00 11 00 00) -> bit_T

    // ALSO: Ich muss nach jeder Iteration 2 Bits nach links shiften, wenn eine For-Schleife benutzt wird
    // Eigentlich nur *4 immer die Bits, aber Bit-Shiften zum Ausprobieren, da wir ja auch den char in Bits manipulieren
    // Zahlen kann man nicht binÑr angeben, schade :( (Compiler sagt nein)

    return ausgabe;
}

unsigned char readCodon(FILE *fp)
{
    char einlesen;
    for (int i = 0; i < 3; i++)
    {
        fscanf(fp, "%s", &einlesen);
    }
    return einlesen;
}

int main(void)
{
    //char speicher = (char *) malloc(1000 * sizeof(char));
    char genom[MAX_GENOM] = {0};
    char suchGen[MAX_UNKODIERT] = {0};
    char genKodiert[MAX_KODIERT] = {0};

    printf("Geben sie die DNA-Sequenz des Gens ein: ");
    int anzahlBasen = getDNASequence(suchGen);
    // if (suchGen[0] == 'T' && suchGen[1] == 'T' && suchGen[2] == 'T')
    // {
    //     printf("-Gen gefunden!");
    //     return 0;
    // }
    for (int i = 0, zeiger = 0; i < strlen(suchGen); i += 3, zeiger++)
    {
        char tmp[3] = {suchGen[i], suchGen[i + 1], suchGen[i + 2]};
        genKodiert[zeiger] = encode(tmp);
    }

    FILE *fp;
    fp = fopen("C:\\UNI\\Informatik_2\\Informatik_Praktikum\\BMC_C\\genom.txt", "rb");

    fread(genom, sizeof(unsigned char), MAX_GENOM, fp);
    
    if (strstr(genom, genKodiert))
    {
        printf("-Gen gefunden!");
    }
    else
    {
        printf("-Gen nicht gefunden!");
    }
    getch();
    return 0;
}
