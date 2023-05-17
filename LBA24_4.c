#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char ch)
{
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
     return FALSE;
    }
    else if(ch >= '0' && ch <= '9')
    {
     return FALSE;
    }
    else 
    {
      return TRUE;
    }
    
}

int main()
{ 
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character:\n");
  scanf("%c", &cValue);
 
  
  bRet =Display(cValue);

  if(bRet == TRUE)
  {
    printf("TRUE");
  }
  else
  {
    printf("FALSE");
  }
  return 0;
}