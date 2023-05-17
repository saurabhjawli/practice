#include<stdio.h>
void Display(int iRow, int iCol)
{
  int iCnt1 =0;
  int iCnt2 =0;
  for(iCnt1 =1; iCnt1<=iRow; iCnt1++)
  { 
    for(iCnt2 =1; iCnt2<=iCol; iCnt2++)
    {
      if(iCnt2%2 == 0)
      {
        printf("#\t");
      }
      else
      {
        printf("* \t");

      }
    }
     printf("\n");

  }

  printf("\n");
 
}
int main()
{
  int iValue1 = 0;
  int iValue2 = 0;


  printf("Enter the number of Rows:\n");
  scanf("%d", &iValue1);

  printf("Enter the number columns:\n");
  scanf("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}