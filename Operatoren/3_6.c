#include <stdio.h>
#include <conio.h>

int main(void)
{
    float a,b=1.2,d=0.8333;
    char c;
    printf("Bitte geben sie einen Geldbetrag ein: ");
    scanf("%f",&a);
    printf("in (e)uro oder in (d)ollar umrechnen?\n");
    c = getch();
    switch (c)
    {
        case 'd':
            printf("%.2f Euro sind %.2f Dollar", a, a*b);
            break;
        case 'e':
            printf("%.2f Dollar sind %.2f Euro", a, a*d);
            break;
        default:
            break;
    }

    getch();
    return 0;
}
