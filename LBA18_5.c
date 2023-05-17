#include<stdio.h>
void Display(int iNo)
{
  int iCnt =0;
  int iAns =0;

  if(iNo<0)
  {
    iNo= -iNo;
  }
  
  for(iCnt =1; iCnt<=iNo; iCnt++)
  { 
    iAns = 2 * iCnt;

    printf("%d\t",iAns);
  }

  printf("\n");
 
}
int main()
{
  int iValue = 0;

  printf("Enter the number:\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}