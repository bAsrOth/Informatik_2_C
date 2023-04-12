#include <stdio.h>
#include <conio.h>
#include <time.h>

int main(void)
{
#define laenge 6  
    int array[laenge];
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
    {
        array[i]=rand() % 49 + 1;
    }
    printf("Die Lottozahlen sind: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%i   ",array[i]);
    }
    return 0;
}
