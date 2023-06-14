#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	FILE *fp;
	fp = fopen("../data.csv", "w");
	fprintf(fp,"x,e(x)\n");
	for (double i = -4; i < 4; i += 0.1)
	{
		fprintf(fp,"%.4f,%.4f\n",i,exp(i));
	}
	fclose(fp);
	return 0;
}
