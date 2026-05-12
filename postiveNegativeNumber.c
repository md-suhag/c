#include <stdio.h>

int main(void){

    int x;

    printf("Enter a integer: ");
    scanf("%d", &x);

    if(x>0){
        printf("Positive");
    }else if (x<0){
        printf("Negative");
    }else{
        printf("Zero");
    }

    getchar();
    getchar();
    
    return 0;
}