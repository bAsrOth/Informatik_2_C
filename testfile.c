
#include <stdio.h>
#include <conio.h>

int main(void){
    int test_1 = 0; 
    printf("Zahl: ");
    scanf("%d", test_1);
    int teilbar = test_1%3;
    printf("%d", teilbar);
    return 0;
}