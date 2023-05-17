#include<stdio.h>
#include<stdlib.h>

int RangeDisplay(int iStart, int iEnd)
{ int iCnt =0;
int iSum = 0;
  iCnt = iStart;
  for(iCnt; iCnt<=iEnd; iCnt ++)
  {
    if(iCnt%2==0)
    {
      iSum = iSum + iCnt;
    }
  }
  
  return iSum;

}
int main()
{
    int iValue1 =0; int iValue2 = 0;
    int iRet =0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);
  
  if(iValue1>iValue2 || iValue1 <0)
  {
  printf("Invalid input.\n");

  }
  else
  {
    iRet = RangeDisplay(iValue1,iValue2);

    printf("Addition of all numbers in given range is:%d\n",iRet);
  }

    return 0;
}