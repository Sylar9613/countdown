#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    int iCounter;

    printf("\nEnter a value for the counter\n");
    scanf("%d", &iCounter);

    while(iCounter != 0){
        printf("\n\n\n\t%d", iCounter);
        iCounter--;
        sleep(1);
        system("clear");
    }

    printf("\nCount down timer has expired\n");
    return 0;
}