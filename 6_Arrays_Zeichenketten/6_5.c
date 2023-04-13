#include <stdio.h>
#include <conio.h>

int main(void)
{

#define len 8;
    int a = len;
    int array[8] = {6, 5, 3, 1, 8, 7, 2, 4};
    for (int n = a; n > 1; --n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i+1] = temp;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("\t%i\n",array[i]);
    }
    
}
