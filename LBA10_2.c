#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{ 
  double dArea = 0;

  dArea = fWidth * fHeight;
  
  return dArea;

}
int main()
{
    float fValue1 =0.0, fValue2 =0.0 ;
    double dRet =0.0;

    printf("Enter the width:\n");
    scanf("%f", &fValue1);
    
    printf("Enter the height:\n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area is %lf",dRet);


  return 0;
}