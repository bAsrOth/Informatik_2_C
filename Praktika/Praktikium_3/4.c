#include <stdio.h>
#include <conio.h>

int main(void)
{
    int sekunden, minuten, stunden;
    printf("Geben sie eine Anzahl von Sekunden ein: ");
    scanf("%d",&sekunden);
    minuten = sekunden/60 % 60;
    stunden = (sekunden /60/60) % 60;
    printf("Stunden: \t%i\n",stunden);
    printf("Minuten: \t%i\n",minuten);
    printf("Sekunden: \t%i\n",sekunden);
    getch();
    return 0;
}