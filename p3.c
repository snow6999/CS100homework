/* CS100 Fall 2026 - HW1 Problem 3: Sum and maximum
 *
 * Read integers until a 0; print the sum and the maximum.
 * No arrays or dynamic memory allocation. Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int in;
    int max=-100;
    int sum=0;
    while (1){
        scanf ("%d",&in);
        if (in==0){
            break;
        }
        if (in>max){
            max=in;
        }
        sum+=in;

        
    }
    printf("sum: %d\n",sum);
    printf("maximum: %d\n",max);
    return 0;
}
