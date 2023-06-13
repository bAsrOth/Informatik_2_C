// Schreiben Sie ein Programm, bei dem zun„chst die obere und untere Grenze eines Intervalls als
// Flieákommazahlen eingeben k”nnen. Dann fllen Sie ein x-Array mit 11 Werten gleichm„áig
// zwischen diesen Grenzen (von der unteren Grenze x[0] bis zur oberen Grenze x[10]).
// Geben Sie diese Werte dann in einer Zeile mit drei Nachkommastellen in einem 8 Zeichen breiten
// Feld rechtsbndig aus (siehe unten).
// Berechnen Sie dann fr diese 11 x-Werte auch 11 y-Werte in einem Array mit y = 2xı - 5x + 1 und
// bestimmen Sie das Minimum der y-Werte. Geben Sie dann die y-Werte in der Zeile unter den x-
// Werten (wieder mit 3 Nachkommastellen in einem 8 Zeichen breiten Feld) und das Minimum aus.
// Wie muss das Programm erweitert werden, um nach einen weiteren Durchlauf mit 10 neuen
// Grenzen eine gr”áere Genauigkeit zu erzielen? Dabei soll die neue Untergrenze der linke
// Nachbarwert und die neue Obergrenze der rechte Nachbarwert des vorherigen Minimums sein.

#include <stdio.h>
#include <conio.h>
#include <math.h>

float f_x(float zahl){
	float ergeb = 2*(zahl * zahl) - 5*zahl +1;
	return ergeb;
}

int rechner(float array[], float max, float min){
	array[0] = f_x(min);
	array[10] = f_x(max);
	float tmp  = abs(max-min);
	float schrittweite = (tmp)/11;
	float wert = min +schrittweite;
	for (int i = 1; i < 10; i++, wert += schrittweite)
	{
		array[i] = f_x(wert);
	}
	
}

int main(void)
{
	float eingabe, ausgabe;
	float array[10] = {0};
	int max, min;
	printf("Obere Grenze: ");
	scanf("%d", &max);
	printf("Untere Grenze: ");
	scanf("%d", &min);
	rechner(array, max, min);
	for (int i = 0; i < 11; i++)
	{
		printf("%8.3f", array[i]);
	}
	
	getch();
	return 0;
}
