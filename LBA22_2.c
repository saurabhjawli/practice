#include<stdio.h>
void Display(int iRow, int iCol)
{
  int i =0;
  int j =0;
  int iDigit = 0;

  for(i =1; i<=iRow; i++)
  {
    iDigit = iCol;
    for(j =1; j<=iCol; j++,iDigit--)
    {
      if (i<=iDigit)
      {
        printf("*\t");
      }
      else
      {
        printf("#\t");
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