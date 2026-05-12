#include <stdio.h>

int main(){

    int x ;

    printf("Enter a number: ");

    scanf("%d", &x);

    if(x>10 && x<50){
        printf("In range");
    }

    return 0;
}