#include <stdio.h>
#include <conio.h>
#define LENGTH_ARRAY 5


int main(void)
{
    printf("Bitte geben sie 5 ganze Zahlen ein: ");
    int array[LENGTH_ARRAY] = {0};
    int tmp;
    int maximal = 0, summe = 0;
    for (int i = 0; i < LENGTH_ARRAY; i++)
    {
        scanf("%i",&array[i]);
        summe += array[i];
        if (array[i] > maximal)
        {
            maximal = array[i];
        }
    }
    float mittelwert = summe/LENGTH_ARRAY;
    printf("Maximalwert: %d   Mittelwert: %.2f   Summe: %d", maximal, mittelwert ,summe);
    getch();
    return 0;
}
