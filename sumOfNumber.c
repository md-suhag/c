#include <stdio.h>

int main (){




    int sum = 0;

    for(int i = 1;i<=10;i++){
        sum = sum + i;
    }

    printf("summation of 1 to N number is : %d", sum);
    return 0;
}