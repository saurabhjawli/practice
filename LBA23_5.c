#include<stdio.h>

void DisplaySchedule(char ch)
{
  if((ch >= 65) && (ch <= 68))
  {
    if(ch ==65)
    {
      printf("Your Exam at 7AM");
    }
    else if (ch ==66)
    {
      printf("Your Exam at 8.30 AM");
    }
    else if(ch ==67)
    {
      printf("Your Exam at 9.20 AM");
    }
    else
    {
      printf("Your Exam at 10.30AM");
    }
 
  }
  else
  {
    printf("Invalid Division");
  }

}

int main()
{ 
  char cValue ='\0';

  printf("Enter the element:");
  scanf("%c",&cValue);

  DisplaySchedule(cValue);

 
  return 0;
}