#include <stdio.h>
#include <conio.h>

void swap(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
void main()
{
    int a = 2, b = 7;
    swap(&a, &b);
    getch();
}