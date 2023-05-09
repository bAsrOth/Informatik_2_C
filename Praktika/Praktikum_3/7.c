#include <stdio.h>
#include <conio.h>


int main(void)
{
    int zahl;
    printf("Bitte geben sie eine Zahl (0..255) ein: ");
    scanf("%d",&zahl);
    
    int bit1 = zahl % 2;
    zahl = zahl /2;
    int bit2 = zahl % 2;
    zahl = zahl /2;
    int bit3 = zahl % 2;
    zahl = zahl /2;
    int bit4 = zahl % 2;
    zahl = zahl /2;
    int bit5 = zahl % 2;
    zahl = zahl /2;
    int bit6 = zahl % 2;
    zahl = zahl /2;
    int bit7 = zahl % 2;
    zahl = zahl /2;
    int bit8 = zahl % 2;

    printf("%i%i%i%i %i%i%i%i\n",bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1);

    getch();
    // bit = zahl/2 % 2;
    // zahl = zahl /2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);

    // bit = zahl%2;
    // zahl /= 2;
    // printf("%i",bit);
    return 0;
}