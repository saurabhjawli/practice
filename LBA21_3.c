#include<stdio.h>
void Display(int iRow, int iCol)
{
  int iCnt1 =0;
  int iCnt2 =0;
  int iDigit = 1;
char ch ='a';

  for(iCnt1 =0; iCnt1<iRow; iCnt1++)
  { 
    iDigit =1;
    ch = 'a';
    for(iCnt2 =1; iCnt2<=iCol; iCnt2++,iDigit++,ch++)
    {
      if( iDigit<=5 && iCnt1%2 !=0)
      {
        printf("%d\t",iDigit);
      }
      if( ch<='e' && iCnt1%2 ==0)
      {
       printf("%c\t",ch);
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
   
   printf("\n");

  Display(iValue1, iValue2);

  return 0;
}