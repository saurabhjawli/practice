#include<stdio.h>

int Check(char *str,char Ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
          break;
        }
        str++;
        iCnt++;
    }
    if(*str != Ch)
        {
          iCnt = -1;
        }
    return iCnt;
   
}

int main()
{
    char Arr[20];
    char cValue ='\0';
    int iRet = 0;

    printf("Please enter string:\n");
    scanf("%[^'\n']s", Arr);
    
    printf("Please enter character:\n");
    scanf(" %c",&cValue);

    iRet = Check(Arr,cValue);
    printf(" character INDEX:%d\n",iRet);

    return 0;
}