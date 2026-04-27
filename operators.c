#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(void){

    int sum = 10 + 20;
    printf("sum is : %d \n",sum);

    int a = 2147483647;
    printf("%d \n", a);

    printf("Signed int range: %d to %d \n", INT_MIN, INT_MAX);

char text2[5] = "25";
char text[5]= "25";
    printf("%d",strcmp(text2 , text) ==1 );

    if(strcmp(text2 , text) ==0){
        printf("match");
    }else{
        printf("not match");
    }

    return 0;

}