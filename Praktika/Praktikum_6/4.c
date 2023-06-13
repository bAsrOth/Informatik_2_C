#include <stdio.h>
#include <conio.h>
#include <math.h>

#define LEN 1000

int arrayFuellen(char array[])
{
	for (int i = 2; i < LEN; i++)
	{
		array[i] = 1;
	}
	return 0;
}

int main(void)
{
	int n = 0;
	int j;
	char prim[LEN] = {0};
	arrayFuellen(prim);
	for (int i = 2; i < LEN; i++)
	{
		if (prim[i] == 1)
		{
			printf("%i\n",i);
			j = i; 				// wenn es eine Primzahl ist, sind alle vielfachen keine
			while (j + i < LEN)
			{
				j = j + i;
				prim[j] = 0;
			}
		}
	}

	getch();
	return 0;
}
