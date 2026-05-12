#include <stdio.h>

int main (){

    float a, b, c;

    printf("Enter 3 number:");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a>b && a>c){
        printf("A is the largest number");
    }else if (b>a && b>c){
        printf("B is the largest number");
    }else if (c>a && c>b){
        printf("C is the largest number");
    }else{
        printf("unknown");
    }


    return 0;
}