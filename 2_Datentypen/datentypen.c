#include <stdio.h>

/*int main(void){
    double pi = 3.14159265358979;
    printf("pi = %4.3f\n",pi);
    printf("1000*pi = %6.5f\n",pi*1000);
    printf("pi/1000 = %3.2e\n",pi/1000);
    return 0;
}*/

int main(void){
    int var; 
    printf("Bitte geben sie eine ganze Zahl ein: ");
    scanf("%i",&var);
    printf("Dezimal: %d \t Oktal: %o \t Hexadezimal: %X\n\n\n", var, var, var);
    getch();
    return 0;
}




