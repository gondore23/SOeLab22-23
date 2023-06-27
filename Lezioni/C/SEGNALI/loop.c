#include<stdio.h>

/* da usare con ridirezione su /dev/null*/

int main(){
    printf("SONO UN PROGRAMMA CHE VA IN LOOP\n");
    while(1){
        printf("Sono nel ciclo\n");
    }
}