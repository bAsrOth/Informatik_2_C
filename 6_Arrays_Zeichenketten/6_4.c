#include <stdio.h>
#include <conio.h>

int main(void)
{
    int array[] = {1,4,78,3,45};
    int gross = 0;
    for (int i = 0; i < 5; i++)
    {
        if (gross<array[i])
        {
            gross = array[i];
        }
    }
    printf("%i",gross);
    return 0;
}
