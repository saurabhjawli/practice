#include<stdio.h>
int main()
{
    char Name [30];
    printf("Please Enter full name:\n");
    scanf("%[^\n]s", Name);
    printf("Your name is %s", Name);

    return 0;
}