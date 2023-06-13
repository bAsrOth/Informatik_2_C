#include <stdio.h>
#include <conio.h>
#include <string.h>


int main(void)
{
	char kinesen[] ={"Drei Chinesen mit dem Kontrabass"};
	puts(kinesen);
	printf("Durch welches Zeichen sollen die Vokale ersetzt werden: ");
	char eingabe;
	scanf("%c", &eingabe);
	for (int i = 0; i < strlen(kinesen);)
	{
		char tmp = kinesen[i];
		if (tmp == 'I' || tmp == 'i' || tmp == 'a' || tmp == 'A' || tmp == 'e')
		{
			kinesen[i] = eingabe;
			i++;
		}
		else if(tmp == 'E' || tmp == 'o' || tmp == 'O' || tmp == 'u' || tmp == 'U')
		{
			kinesen[i] = eingabe;
			i++;
		}
		else{i++;}
	}
	putchar('\n');
	puts(kinesen);
	getch();
	return 0;
}

