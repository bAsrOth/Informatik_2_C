#include <stdio.h>
#include <conio.h>

char readChar(void)
{
    while (1)
    {
        char c = getch();
        if (c >= 'A' && c <= 'Z')
        {
            putchar(c);
            return c;
            break;
        }
        else if (c >= 'a' && c <= 'z')
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
    char tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = readChar();
        if (tmp == 13)
        {
            return 0;
        }
        else{
            text[i] = tmp;
        }
        
    }
    return 0;
}


int main(void)
{
    int anzahl;
    char text[100];
    printf("Bitte geben sie ein wieviele Zeichen sie eingeben wollen: ");
    scanf("%d",&anzahl);
    printf("Geben sie jetzt ihren Satz ein (Enter beendet): ");
    readLine(text,anzahl);
    putchar('\n');
    puts(text);
    getch();
    return 0;
}
