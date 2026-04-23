#include <stdio.h>
#include <limits.h>

int main(void){

    int sum = 10 + 20;
    printf("sum is : %d \n",sum);

    int a = 2147483647;
    printf("%d \n", a);

    printf("Signed int range: %d to %d \n", INT_MIN, INT_MAX);

    return 0;

}