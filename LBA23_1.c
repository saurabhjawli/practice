#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
  if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122))
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
    printf("It is a character");
  }
  else
  {
    printf("It is not a character");
  }

  return 0;
}