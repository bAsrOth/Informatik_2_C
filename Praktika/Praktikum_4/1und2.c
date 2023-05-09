#include <stdio.h>
#include <conio.h>

int main(void)
{
    int a,summe = 0;
    printf("Bitte geben sie eine Zahl ein: ");
    scanf("%d",&a);
    for (int i = 1; i <= a;)
    {
        summe += i*i;
        printf("Summe von  %i an ist: %i\n",i,summe);
        i++;
    }
    printf("Die Summe der Quadratzahlen bis zu %d ist %d.\n",a,summe);
    int n =1;
    printf("Alle geraden Zahlen bis %i:\n",a);
    printf("1, ");
    while (1)
    {

        if ((n%2) == 0){
            printf("%i, ",n);
        }
        n++;
        if (n == a+1)
        {
            break;
        }
        
    }
    getch();
    return 0;
}
