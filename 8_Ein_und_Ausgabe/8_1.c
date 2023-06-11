#include <stdio.h>
#include <conio.h>

int main(void)
{
	FILE *fp;
	char name[80];
	char inhalt[1000];
	printf("Bitte geben sie einen Dateinamen ein: ");
	scanf("%s", &name);
	fp = fopen(name, "r");
	int n = 0;
	while (feof(fp) != 0)
	{
	}
}
