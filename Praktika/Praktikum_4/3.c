#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

// ASCII Grenzen: a: 97 und z: 122

int main(void)
{
    char c;
    srand(time(NULL));
    int zahl = rand() % 26 + 97;
    int eingabe, abstand;
    while (eingabe != zahl)
    {
        printf("Raten sie den Kleinbuchstaben: ");
        c = getch();
        eingabe = c;
        abstand = zahl - eingabe;
        if (zahl == eingabe)
        {
            printf("%c ist richtig!",eingabe);
        }
        else {
            printf("%c ist falsch. Der Abstand ist %d Zeichen.\n",eingabe,abstand);
        }
        
    }
    getch();
    return 0;
}
