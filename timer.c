#include <stdio.h>
#include <windows.h>
#define TRUE 1

int main(void){
    int hour = 0, min = 0, sec = 0;
    printf("\n\n\n\n\n\n");
    while(TRUE){
        /* code */
        printf("\r \t\t\t\t %2d : %2d : %2d", hour, min, sec);
        sec++;
        Sleep(1000);
        if  (sec == 59){
            min++;
            sec = 0;
        }
        if  (min == 59){
            hour++;
            min = 0;
            sec = 0;
        }
        if  (hour == 24){
            hour = 0;
            min = 0;
            sec = 0;
        }
    }
    return 0;
}