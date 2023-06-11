#include <stdio.h>
#include <conio.h>

int main(void)
{
    int matrix[2][2] = {{0}, {0}};
    int n = 0;
    int n_2 = 1;
    printf("*** Determinante einer 2x2 Matrix ***\n\n");

    printf("Matrix-Element a[1][1]: ");
    scanf("%d", &matrix[0][0]);
    printf("Matrix-Element a[1][2]: ");
    scanf("%d", &matrix[0][1]);
    printf("Matrix-Element a[2][1]: ");
    scanf("%d", &matrix[1][0]);
    printf("Matrix-Element a[2][2]: ");
    scanf("%d", &matrix[1][1]);

    putchar('\n');
    printf(" %i %i", matrix[0][0], matrix[0][1]);
    putchar('\n');
    printf(" %i %i", matrix[1][0], matrix[1][1]);
    putchar('\n');
    int det = matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    printf("Die Determinante ist det(a) = %i",det);
    getch();
    return 0;
}
