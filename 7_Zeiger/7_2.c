#include <stdio.h>
#include <conio.h>

int main(void)
{
    char text[] = "Hallo ich bin der Bastian"; //L„nge des Strings ist 26 Zeichen
    for (int i = 0; i < 26; i++)
    {
        putchar(text[i]);
    }
    return 0;
}
