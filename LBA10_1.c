#include<stdio.h>

double CircleArea(float fRadius)
{ 
  float fPI = 3.14;
  double dArea = fPI*fRadius*fRadius;
  
  return dArea;

}
int main()
{
    float fValue =0.0;
    double dRet =0.0;
    printf("Enter the radius:\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("%lf",dRet);


  return 0;
}