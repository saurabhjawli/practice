#include<stdio.h>

void Display(char ch)
{
    printf("Decimal value is: %d\n",ch);
    printf("\nOctal value is: %o\n",ch);
    printf("\nHexadecimal value is (Alphabet in small letters): %x\n",ch);
    printf("\nHexadecimal value is (Alphabet in capital letters): %X\n",ch);
 
  
}

int main()
{ 
  char cValue = '\0';

  printf("Enter the character:\n");
  scanf("%c", &cValue);
 
  
  Display(cValue);

  return 0;
}