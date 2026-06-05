#include <stdio.h>

int main (){

    int inputDigit;

    printf("Enter a digit to count:  ");
    scanf("%d", &inputDigit);

    int i =0;
    for ( i; inputDigit != 0; i++)
    {
        /* code */
        inputDigit = inputDigit/10;


    }
    

    printf("Total digits: %d", i);
    return 0;
}