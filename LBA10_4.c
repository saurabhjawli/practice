#include<stdio.h>

double FhtoCs(float fTemp)
{ 
  double dCel = 0;

  dCel = ((fTemp -32)*5)/9;
 
  return dCel;
  
}
int main()
{
   float fValue =0.0;
   double dRet =0.0;

    printf("Enter the temperature in Farenheit:\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%lf",dRet);


    return 0;
}