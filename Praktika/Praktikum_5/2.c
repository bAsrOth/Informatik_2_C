#include <stdio.h>
#include <conio.h>

int iSEven(int);


int main(void)
{
    int zahl;
    printf("Geben sie eine ganze Zahl ein: ");
    scanf("%d",&zahl);
    if (iSEven(zahl) == 0){
        printf(" Die Zahl %d ist gerade.",zahl);
    }
    if (iSEven(zahl) == 1){
        printf(" Die Zahl %d ist ungerade.",zahl);
    }
    getch();
    return 0;
}

int iSEven(int a){
    int erg = a % 2;
    if (erg == 1)
    {
        return 1;
    }
    else {
        return 0;
    }
    
}