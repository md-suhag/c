#include <stdio.h>

int main(void){

    int age;

    printf("Enter your age:");


    scanf("%d", &age);

    if(age>=18){
        printf("Eligible to vote");
    }else{
        printf("Not eligible");
    }
    return 0;
}