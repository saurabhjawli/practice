#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 1;
    int iOddFact= 1;
    int iEvenFact= 1;

    int iDiff =1;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
      if(iCnt%2 != 0)
      {
         iOddFact = iOddFact*iCnt;
      }
      else
      {
         iEvenFact = iEvenFact*iCnt;
      }
    }
    iDiff = iEvenFact -iOddFact;
    return iDiff;
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