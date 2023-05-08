#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    srand(time(NULL));
    int random_number_1 = rand() % 100 + 1, eingabe,versuche=0;
    while (1)
    {
        printf("Erraten sie die Zahl zwischen 1 und 100: ", random_number_1);
        scanf("%d", &eingabe);
        if (eingabe > random_number_1)
        {
            printf("Zu gross!\n");
            versuche += 1;
        }
        else if (eingabe < random_number_1)
        {
            printf("Zu klein!\n");
            versuche += 1;
        }
        else if (eingabe == random_number_1)
        {
            printf("Richtig!\n");
            versuche += 1;
            printf("Anzahl der Versuche: %i\n", versuche);
            getch();
            break;
        }
    }
    return 0;
}
