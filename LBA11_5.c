#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{ int iCnt =0;
  iCnt = iEnd;

  for(iCnt; iCnt>=iStart; iCnt --)
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

    if(iValue1>iValue2)
  {
  printf("Invalid input.\n");
  }
  else
  {

    printf("Numbers in given range are:\n");

    RangeDisplayRev(iValue1,iValue2);
  }

    return 0;




}