#include <stdio.h>
#include <conio.h>

int main(void)
{
    int c;
    printf("Bitte geben sie ein Zeichen ein: ");
    c = getchar();
    if (c <= 0x41 || c >= 0x7A)
    {    
        printf("Es ist kein Buchstabe");
        return 0;
    }
    if (c >= 0x41 || c <= 0x5A)
    {
        c = c | 0x20;
        putchar(c);
        return 0;
    }
    if (c & 0x20)
    {
        c = c & 0xDF;
        putchar(c);
        return 0;
    }
    return 0;
}
