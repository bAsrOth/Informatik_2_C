#include <stdio.h>
#include <conio.h>


#define mwst 0.19
int main(void)
{
    // Makroprogramme mit #define
    float netto, brutto;
    printf("Bitte geben sie einen Netto-Betrag ein: ");
    scanf("%f",&netto);
    printf("Das sind brutto %.2f (inkl. %.2f MwSt)",(netto+netto*mwst),netto*mwst);
    getch();
    return 0;
}