#include <stdio.h>
#include <conio.h>
#include <string.h>

int stringLength(char text[])
{
	int i = 0;
	while (text[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	printf("Bitte geben sie einen Satz ein:");
	char text[100];
	gets(text);
	int count = stringLength(text);
	printf("Der String ist %d Zeichen lang.", count);
	return 0;
}
