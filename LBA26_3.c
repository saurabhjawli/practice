#include<stdio.h>

void Display(char *str)
{
    while(*str != '\0')
    {   if((*str>='A') && (*str<='Z'))
        {
          *str = *str +32;
        }
        else if((*str>='a') && (*str<='z'))
        {
          *str = *str -32;
        }
         str++;
    }
}

int main()
{
    char Arr[20];

    printf("Please enter string:\n");
    scanf("%[^'\n']s",Arr);   
    
    Display(Arr);

    printf("Modified string is: %s\n",Arr);

    return 0;
}