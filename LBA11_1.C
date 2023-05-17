#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{ int iCnt =0;
  iCnt = iStart;

  for(iCnt; iCnt<=iEnd; iCnt ++)
  {
    printf("%d\n",iCnt);
  }

}
int main()
{
    int iValue1 =0; int iValue2 = 0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending point:\n");
    scanf("%d",&iValue2);

    printf("Numbers in given range are:\n");

    RangeDisplay(iValue1,iValue2);

    return 0;




}