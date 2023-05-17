#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
  if((ch >= 65) && (ch <= 90))
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

  printf("Enter the character:");
  scanf("%c",&cValue);

  bRet = CheckAlpha(cValue);

  if (bRet == TRUE)
  {
    printf(" character is capital");
  }
  else
  {
    printf(" character is not capital");
  }

  return 0;
}