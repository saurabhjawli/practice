#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Check(char *str,char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
        return TRUE;
        }
        str++;
    }
   
}

int main()
{
    char Arr[20];
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Please enter string:\n");
    scanf("%[^'\n']s", Arr);
    
    printf("Please enter character:\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr,cValue);  

    if ( bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }  


    return 0;
}