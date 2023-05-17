#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1,jCnt = 1;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    for(jCnt=1; jCnt<=iNo; jCnt++)
    {
        printf("#\t");
    }

    
}
int main()
{
    int iValue =0;

    int iRet =0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);
    
    Display(iValue);


  return 0;
}