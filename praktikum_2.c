#include <stdio.h> 

/* //Aufgabe 1

int main()
{
    printf("Hi,\nWer geht");
    printf(" mit in den Biergarten");
    printf("?\n");
    return 0;
}

mit der Ausgabe: 
    Hi,
    Wer geht mit in den Biergarten?
    <- Hier ist der Cursor
*/

/* 
//Aufgabe 2

int main(void){
    printf("Bastian Johannes Roth\n");
    printf("0172 5212568\n");
    printf("bastianroth120@gmail.com\n");
    return 0;
}
*/

/*
//Aufgabe 3

int main(void)
{
    int km;
    float ml;
    printf("Bitte geben sie eine beliebige Strecke in km ein: ");
    scanf("%d", &km);
    ml = km * 1.609344; 
    printf("%i Kilometer sind %.1f Meilen",km, ml);
    return 0;
}

*/
/*
#include <stdio.h> // Hier hat die Raute # gefehlt
int main()
{ // Hier stimmt einiges nicht!
    double a;
    b = a + 10; // b muss ein Typ zugewiesen werden, z.b. int b = a + 10;
    printf("Ergebnis: %d/n", b);
    return 0;
}

*/



//Aufgabe 4, sh. https://www.fachinformatiker.de/topic/12481-ausgabe-von-umlauten/

int main(){
    printf("****** Kundenverzeichnis ******\n\n");
    printf("   N = Neuen Eintrag hinzuf\x81gen\n");
    printf("   L = Eintrag l\x94schen\n");
    printf("   S = Eintrag suchen\n");
    printf("   A = Alle Eintr\x84ge anzeigen\n");
    printf("   E = Programm beenden\n\n");
    printf("  \u005B \u005D Bitte w\x84hlen\n"); //Escape Codes für die Rechteckigen Klammern in Unicode
    getch();
    return 0;
}   
