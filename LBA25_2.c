#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt = 0;

  while(*str != '\0')
  {
    if (97<=*str && *str <=122  )
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{ 
  char Arr[20];
  int iRet =0;

  printf("Enter the string:\n");
  scanf("%[^'\n']s",Arr);
 
  
  iRet =CountCapital(Arr);

  printf("Capital letters are: %d",iRet);

  return 0;
}