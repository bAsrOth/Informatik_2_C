#include <stdio.h>
#include <conio.h>

void swap(int *pa, int *pb)
{
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
int main(void)
{
	int a = 2, b = 7;
	printf("a = %d und b = %d\n\n",a,b);
	swap(&a, &b);
	printf("a = %d und b = %d",a,b);
	getch();
	return 0;
}