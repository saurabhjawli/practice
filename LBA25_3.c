#include<stdio.h>

int CountCapital(char *str)
{
  int iSmall = 0;
  int iCap =0;
  int iAns = 0;

  while(*str != '\0')
  {
    if (97<=*str && *str <=122  )
    {
      iSmall++;
    }
    else if (65<=*str && *str <=90  )
    {
      iCap++;
    }
    else
    {
      printf("Invalid output");
    }
    str++;
  }

  iAns =iSmall - iCap;

  return iAns;
}

int main()
{ 
  char Arr[20];
  int iRet =0;

  printf("Enter the string:\n");
  scanf("%[^'\n']s",Arr);
 
  
  iRet =CountCapital(Arr);

  printf("Difference is: %d",iRet);

  return 0;
}