/**
 * @file main.c
 * @author Bastian Roth
 * @brief 
 * @version 0.1
 * @date 2023-06-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * @param x Wert zum Plotten
 * @param center_pos Position der Mitte der Gausschen Glockekurve
 * @param height H”he der Glockenkurve
 * @param width Breite der Glockenkurve
 * @return double 
 */
double gaussian(double x, double center_pos, double height, double width){
	return height*(exp(-(pow((x-center_pos),2.0))/(2*pow(width,2))));
}

int main(void)
{
	FILE *fp;
	fp = fopen("../data.csv", "w");
	fprintf(fp,"x,e(x)\n");
	for (double i = -10; i < 10; i += 0.1)
	{
		fprintf(fp,"%.4f,%.4f\n",i,gaussian(i,0.0,3,1.8));
	}
	fclose(fp);
	return 0;
}
