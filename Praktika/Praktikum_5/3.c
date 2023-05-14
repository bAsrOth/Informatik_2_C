#include <stdio.h>
#include <conio.h>

char readChar(void)
{
    while (1)
    {
        char c = getch();
        if (c >= 65 && c <= 90)
        {
            putchar(c);
            return c;
            break;
        }
        else if (c >= 97 && c <= 122)
        {
            putchar(c);
            return c;
            break;
        }
        else if (c == ' ')
        {
            putchar(c);
            return c;
            break;
        }
        else if (c == 13)
        {
            putchar(13);
            return c;
            break;
        }
        else
        {
            putchar(7);
        }
    }
}

int readLine(char *text, int n){
    for (int i = 0; i < n; i++)
    {
        text[i] = readChar();
    }
    return 0;
}


int main(void)
{
    int anzahl;
    char text[100];
    printf("Bitte geben sie ein wieviele Zeichen sie eingeben wollen: ");
    scanf("%d",&anzahl);
    readLine(text,anzahl);
    getch();
    return 0;
}
