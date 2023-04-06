#include <stdio.h>
#include <conio.h>

//Schreiben Sie ein Standard-C Programm, das zwei kommagetrennte Zahlen einliest, addiert und die Summe wieder ausgibt.

int main(void){
    int a, b;
    printf("Bitte geben sie zwei kommagetrennte Zahlen ein: ");
    scanf("%i,%i", &a,&b);
    printf("%i + %i = %i",a,b,a+b);
    getch();
    return 0;
}