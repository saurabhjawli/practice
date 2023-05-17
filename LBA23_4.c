#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
  if((ch >= 97) && (ch <= 122))
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }

}

int main()
{ 
  char cValue ='\0';
  BOOL bRet = FALSE;

  printf("Enter the element:");
  scanf("%c",&cValue);

  bRet = CheckAlpha(cValue);

  if (bRet == TRUE)
  {
    printf(" it is smallcase");
  }
  else
  {
    printf(" it is not smallcase");
  }

  return 0;
}