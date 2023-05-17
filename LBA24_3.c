#include<stdio.h>

void Display(char ch)
{
  int iCnt =0;

  for(iCnt =0; iCnt = (26-ch);iCnt++,ch++)
  {
  if(65<=ch && ch<=90)
  {
    printf("%c",(ch));
  }
  else if(97<=ch && ch<=122)
  {
    printf("%c",(ch));
  }
  else 
  {
    return;
  }
  }
 
  
}

int main()
{ 
  char cValue = '\0';

  printf("Enter the character:\n");
  scanf("%c", &cValue);
 
  
  Display(cValue);

  return 0;
}