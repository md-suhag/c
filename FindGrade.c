#include <stdio.h>

int main(){

    float marks;

    printf("Enter your marks: ");

    scanf("%f",&marks);

    if(marks>=80){
        printf("A");
    }else if(marks>=60){
        printf("B");
    }else if(marks>=40){
        printf("C");
    }else{
        printf("Fail");
    }



    return 0;
}