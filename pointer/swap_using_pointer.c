#include <stdio.h>

int main(){

    int a, b, temp;

    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);


    int *p = &a;
    int *p2 = &b;

    temp= *p;
    *p= *p2;
    *p2 = temp;

    printf("a = %d, b = %d",a,b);


    return 0;
}