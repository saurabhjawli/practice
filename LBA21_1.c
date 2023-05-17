#include<stdio.h>
void Display(int iRow, int iCol)
{
  int iCnt1 =0;
  int iCnt2 =0;
  int iDigit = 1;
  for(iCnt1 =iRow; iCnt1>0; iCnt1--)
  { 
    for(iCnt2 =1; iCnt2<=iCol; iCnt2++,iDigit++)
    {
       if(iDigit ==10)
    {
      iDigit= 1;
      printf("%d\t", iDigit);

    }
    else
    {
      printf("%d\t", iDigit);
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