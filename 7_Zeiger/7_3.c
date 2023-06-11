#include <stdio.h>
#include <conio.h>
#include <time.h>

int init(int adresse, int groesse,int wert){
#define MAX groesse
    int array[] = {0};
    for (int i = 0; i < groesse; i++)
    {
        array[i] = wert;
    }
    return array[groesse];
}

int main(void)
{
    int array[] = {init(1,20,-1)};
    for (int i = 0; i < 20; i++)
    {
        printf("%i ", array[i]);
    }
    
}
