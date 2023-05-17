#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iFact= 1;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
      if(iCnt%2!= 0)
      {
         iFact = iFact*iCnt;
      }
    }
    return iFact;
}
int main()
{
    int iValue =0;

    int iRet =0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%d",iRet);


  return 0;
}