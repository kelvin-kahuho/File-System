#include <stdio.h>

int main()
{
    printf("What is you name: \n");
    char name[10];
    scanf("%s", name);
    printf("Your name is: %s \n", name);

    int age ;
    printf("What is your age: \n");
    scanf("%d", &age);

    printf("Hey %s, you are %d years old \n", name, age);


    return 0;
}