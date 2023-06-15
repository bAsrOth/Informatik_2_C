#include <stdio.h>
#include <conio.h>

char getDNABase(void)
{

    char eingabe;

    while (1)
    {
        eingabe = getch();

        if (eingabe == 'A' || eingabe == 'a')
        {
            putchar(65);
            return 'A';
        }
        if (eingabe == 'T' || eingabe == 't')
        {
            putchar(84);
            return 'T';
        }
        if (eingabe == 'C' || eingabe == 'c')
        {
            putchar(67);
            return 'C';
        }
        if (eingabe == 'G' || eingabe == 'g')
        {
            putchar(71);
            return 'G';
        }
        if (eingabe == 10 || eingabe == 13)
        {
            return '\n';
        }
        else
        {
            putchar(7);
        }
    }
    return 0;
}

int getDNASequence(char seq[])
{
    int counter = 0;
    // int position = 0;
    char eingabe;
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
            seq[counter] = eingabe;
            // position++;
            counter++;
        }
    }
    return 0;
}

unsigned char encode(char seq[])
{
    unsigned char ausgabe = 0;
    int bit_A = 0;
    int bit_C = 1;
    int bit_G = 2;
    int bit_T = 3;
    for (int i = 0; i < 3; i++)
    {
        switch (seq[i])
        {
        case 'A':
            ausgabe |= bit_A;
            break;
        case 'C':
            ausgabe |= bit_C;
            break;
        case 'G':
            ausgabe |= bit_G;
            break;
        case 'T':
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
	// Zahlen kann man nicht bin�r angeben, schade :( (Compiler sagt nein)
}

unsigned char readCodon(FILE *fp)
{
    char einlesen;
    fscanf(fp, "%s", &einlesen);
    return einlesen;
}


int main(void)
{
    char unkodiert[21] = {0};
    char kodiert[7] = {0};
    int zahl = getDNASequence(unkodiert);
    int index_kodiert;

    for (int i = 0; i < 21; i+=3, index_kodiert++)
    {
        char tmp[3] = {unkodiert[i],unkodiert[i+1],unkodiert[i+2]};
        kodiert[index_kodiert] = encode(tmp);
    }
    putchar('\n');
    for (int i = 0, n= 0; i < 7; i+=3, n++ ) // printet aktuell immer die Basen und dann den Dezimalwert
    {
        printf("%c\n",unkodiert[i]);
        printf("%c = %i\n",unkodiert[i+1], kodiert[n]);
        printf("%c\n",unkodiert[i+2]);
    }
    
    
    getch();
    return 0;
}