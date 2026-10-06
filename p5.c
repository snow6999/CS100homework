/* CS100 Fall 2026 - HW1 Problem 5: Platinum Lion Dog's Bus Journey
 *
 * Input length is unknown: check the return value of scanf.
 * No arrays or dynamic memory allocation. Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int people;
    scanf("%d",&people);
    int out,in;
    char end;
    int station=0;
    while (scanf("%d %d", &out, &in) == 2){
        if(people<out){
                printf("impossible.\n");
            return 0;
        }
        station++;
        people=people+in-out;

    scanf(" %c",&end);
    if (end=='p'){
        printf("%d\n",people);
    }        
    else{
        printf("%d\n",station);
    }
    return 0;
}
