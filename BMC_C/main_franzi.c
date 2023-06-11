#include <stdio.h>
#include <conio.h>


char getDNABase(void);  
char getDNABase(void){

    char eingabe; 
    
    while (1){
        eingabe = getch(); 

        if (eingabe == 'A'){
            putchar (eingabe); 
        }
        else if (eingabe == 'a'){
            putchar (65); 
        }
        else if (eingabe == 'C'){
            putchar (eingabe); 
        }
        else if (eingabe == 'c'){
            putchar (67); 
        }
        else if (eingabe == 'G'){
            putchar (eingabe); 
        }
         else if (eingabe == 'g'){
            putchar (71); 
        }
        else if (eingabe == 'T'){
            putchar (eingabe); 
        }
        else if (eingabe == 't'){
            putchar (84); 
        }
        else if (eingabe == 10 ||13){
            putchar (eingabe); 
        }
        else {
            putchar (7); 
        }

    }

    return eingabe; 

}

int main(void){
    char c; 
    c = getDNABase(); 

    getch(); 
    return 0; 
}