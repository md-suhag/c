#include <stdio.h>

int main(void){

    int a, b;
    
    printf("Enter number 1 : ");
    scanf("%f", &a);
    printf("Enter number 2 : ");
    scanf("%f", &b);

    if(a>b){
        printf("First is greater");
    }else{
        printf("Second is greater or equal");
    }


    return 0;
}