/* CS100 Fall 2026 - HW1 Problem 4: Second maximum and second minimum
 *
 * No arrays or dynamic memory allocation (the last 5 test cases require
 * O(1) extra space). Do not rename this file.
 */
#include <stdio.h>

int main(void)
{
    int num;
    scanf ("%d",&num);
    int max=-100,sub_max=-100;
    int min=100,sub_min=100;
    for (int i=0;i<num;i++){
        int in;
        scanf ("%d",&in);
        if (in<min){
            sub_min=min;
            min=in;
        }
        else if(in<sub_min &&in!=min){
            sub_min=in;
        }
        if(in>max){
            sub_max=max;
            max=in;
        }
        else if(in>sub_max &&in!=max){
            sub_max=in;
        }
    }
    printf("%d %d\n",sub_max,sub_min);
    return 0;
}
