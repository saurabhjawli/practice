#include<stdio.h>

int Check(char *str,char Ch)
{
    int iCnt = 1;
    int iTemp =0;

    while(*str != '\0')
    {
        if(*str == Ch)
        {
          iTemp = iCnt;
        }
        str++;
        iCnt++;
    }
     
    return iTemp-1;
   
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
    printf(" character last index:%d\n",iRet);

    return 0;
}