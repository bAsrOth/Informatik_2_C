#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

int main(void)
{
    srand(time(NULL));
    int random_number = rand() % 6 + 1;
    char zahl_1[] = "-------\n\n   *   \t(1)\tMit Taste (q) beenden.\n\n-------";
    char zahl_2[] = "-------\n     * \n\t(2)\tMit Taste (q) beenden.\n *     \n-------";
    char zahl_3[] = "-------\n     * \n   *   \t(3)\tMit Taste (q) beenden.\n *     \n-------";
    char zahl_4[] = "-------\n *   * \n\t(4)\tMit Taste (q) beenden.\n *   * \n-------";
    char zahl_5[] = "-------\n *   * \n   *   \t(5)\tMit Taste (q) beenden.\n *   * \n-------";
    char zahl_6[] = "-------\n * * * \n\t(6)\tMit Taste (q) beenden.\n * * * \n-------";
    char c = ' ';
    do
    {
        int random_number = rand() % 6 + 1;
        switch (random_number)
        {
        case 1:
            printf("%s\n\n", zahl_1);
            break;
        case 2:
            printf("%s\n\n", zahl_2);
            break;
        case 3:
            printf("%s\n\n", zahl_3);
            break;
        case 4:
            printf("%s\n\n", zahl_4);
            break;
        case 5:
            printf("%s\n\n", zahl_5);
            break;
        case 6:
            printf("%s\n\n", zahl_6);
            break;
        }
        c = getch();
    } while (c != 'q');  
    return 0;
}
