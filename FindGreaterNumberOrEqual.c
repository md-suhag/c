#include <stdio.h>

int main(void){

    int num1, num2;

    printf("Enter your numbers.\n");

    printf("Enter number 1: \n");
    scanf("%d",&num1);
    printf("Enter number 2: \n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Number 1: %d is greater than number 2: %d", num1, num2);
    }else if(num2>num1){
        printf("Number 2: %d is greater than number 1: %d", num2, num1);  
    }else{
        printf("Number 1 : %d  and number 2 : %d are equal", num1, num2); 
    }


    return 0;
}