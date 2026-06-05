#include <stdio.h>

int main (){


    printf("Printing 1 to N number: \n");

    for(int i = 1;i<=100;i++){

        if(i==100){
            printf("%d",i);
            continue;
        }
        
     printf("%d, ",i);
    }


    return 0;
}