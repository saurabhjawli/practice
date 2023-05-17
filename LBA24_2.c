#include<stdio.h>

void Display(char ch)
{
  if(65<=ch && ch<=90)
  {
    printf("%c",(ch+32));
  }
  else if(97<=ch && ch<=122)
  {
    printf("%c",(ch-32));
  }
  else 
  {
    printf("%c",ch);
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