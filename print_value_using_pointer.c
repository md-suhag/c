#include <stdio.h>

int main (){



    int a ;

    scanf("%d",&a);

    int *iAmPointer = &a;

    // printf("%d",iAmPointer);
    printf("%d",*iAmPointer);


    return 0;
}