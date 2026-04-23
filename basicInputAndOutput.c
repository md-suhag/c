// Online C compiler to run C program online
#include <stdio.h>

// int main() {
//     int age;
//     printf("Enter your age:");
    
//     scanf("%d", &age);
    
//     printf("Age is %d", age);

// return 0;
// }

/*
  fputs()
*/
// int main() {
//     fputs("This is my string", stdout);

// return 0;
// }


/*
Reading a Character
*/
// int main() {
//     char ch;
//     printf("Enter your character: \n");

//     scanf("%c", &ch);
//     printf("you entered %c", ch);

// return 0;
// }


/*
Reading a string
*/
// int main() {
//     char str[100];

//     printf("Enter your string:");

//     scanf("%s", str);
//     printf("you entered %s", str);

// return 0;
// }

/*
fgets()
*/
int main() {
    char name[20];

    printf("Enter your name:");

    fgets(name, sizeof(name), stdin);

    printf("Hello,  %s", name);

return 0;
}