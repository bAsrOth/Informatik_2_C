#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int arrayFuellen(int array[])
{
	srand(time(NULL));
	for (size_t i = 0; i < 6; i++)
	{
		array[i] = rand() % 49 + 1;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				--i;
				break;
			}
		}
	}
	return 0;
}
int ausgabe(int array[])
{
	printf("Lottozahlen: ");
	for (int i = 0; i < 6; i++)
	{
		printf("(%2i) ", array[i]);
	}
	putchar('\n');
}

int sortieren(int array[])
{
	for (int n = 6; n > 1; n--)
	{
		for (int i = 0; i < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int zufallszahlen[6] = {0};
	char c;
	do
	{
		arrayFuellen(zufallszahlen);
		sortieren(zufallszahlen);
		ausgabe(zufallszahlen);
		c = getch();
	} while (c == 'q');
	return 0;
}
