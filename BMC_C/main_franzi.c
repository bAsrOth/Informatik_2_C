#include <stdio.h>
#include <conio.h>
  
char getDNABase(void){

    char eingabe; 
    
    while (1){
        eingabe = getch(); 

        if (eingabe == 'A' || eingabe == 'a'){
            return 'A';
            putchar ('A');
        }
        if (eingabe == 'C' || eingabe == 'c'){
            putchar ('C');
            return 'C';
        }
        if (eingabe == 'G' || eingabe == 'g'){
            putchar ('G');
            return 'G';
        }
        if (eingabe == 'T' || eingabe == 't'){
            putchar ('T');
            return 'T';
        }
        else if (eingabe == 10 || eingabe == 13){
            return '\n';
        }
        else {
            putchar (7); 
        }
    }
    return eingabe; 

}

int main(void){


    getch(); 
    return 0; 
}