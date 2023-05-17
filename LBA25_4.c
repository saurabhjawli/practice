#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(char *str)
{
  while ((*str) != '\0')
  {
    if(*str == 'a'||*str == 'e'|| *str == 'i'||*str == 'o'||*str == 'u')
    {
      return TRUE;
    }
    else
    {
      return FALSE;
    }
  }
  
 
}

int main()
{ 
  char Arr[20];
  BOOL bRet =FALSE;

  printf("Enter the string:\n");
  scanf("%[^'\n']s",Arr);
 
  
  bRet =Check(Arr);

  if(bRet == TRUE)
  {
      printf("Contains Vowel");

  }
  if(bRet == FALSE)
  {
      printf("There is no Vowel");
  }

  return 0;
}