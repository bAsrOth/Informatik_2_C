#include <stdio.h>

int main(void)
{
    float x = -5;
    printf("Gib einen x-Wert ein oder 0 fÅr eine Tabelle: ");
    scanf("%f", &x);
    if (x == 0)
    {
        float x_2 = -5;
        printf("\t x\t|\ty\n");
        for (int i = -5; i < 6; i++)
        {
            float y = x_2 * x_2 + 2 * x_2 + 1;
            printf("\t%.2f\t|\t%.2f\n", x_2, y);
            x_2++;
        }
    }
    else
    {
        float y = x * x + 2 * x + 1;
        printf("Der Y-Wert fÅr y = x*x +2x + 1 ist %.4f", y);
    }

    return 0;
}
