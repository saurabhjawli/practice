#include<stdio.h>

void DisplayASCII()
{
  int iCnt =0;
  char Ch = '\0';
  

  for(iCnt =0 ;iCnt<256;iCnt++,Ch++)
  {
    printf("%d - %c\t",iCnt,Ch);
     if(Ch % 6==0)
        printf("\n");
  }
}

int main()
{ 
 
  
  DisplayASCII();

  return 0;
}