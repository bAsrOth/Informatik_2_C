#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));
    int random_number_1 = rand() % 10 + 1;
    int random_number_2 = rand() % 10 + 1;
    int ergebnis = random_number_1 *random_number_2, eingabe;
    while (1)
    {
        printf("Was ist %i * %i = ",random_number_1,random_number_2);
        scanf("%d",&eingabe);
        if (eingabe == ergebnis)
        {
            printf("Das Ergebnis ist: %i * %i = %i", random_number_1,random_number_2, eingabe);
            getch();
            break;
        }

    }
    return 0;
}
