#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is Odd");
    }

}

int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

     printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet= CheckEven(iValue);
    return 0;
}