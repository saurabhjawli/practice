#include<stdio.h>

double KMtoMeter(int iNo)
{ 
  int iConvert = 0;

  iConvert = iNo*1000;

  return iConvert;
  
}
int main()
{
   int iValue =0;
   int iRet =0;

    printf("Enter the Distance:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);


    return 0;
}