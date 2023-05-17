#include<stdio.h>

void Display(char *str,char *dest)
{
    while(*str != '\0')
    {   
      if((*str>='0') && (*str<='9'))
        {
          *dest = *str;
           dest++;
        }
         str++;
         
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Please enter string:\n");
    scanf("%[^'\n']s",Arr);   
    
    Display(Arr,Brr);

    printf("Modified string is: %s\n",Brr);

    return 0;
}