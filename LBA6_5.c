#include<stdio.h>

float Percentage  (int iNo1,int iNo2)
{
    float fResult = 0;
    fResult = (iNo2/iNo1)*100;

    return fResult;
 
}

int main()
{
    int iValue1 =0, iValue2 =0;
    float fRet =0.0;

    printf("Enter the total Marks:\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained Marks:\n");
    scanf("%d",&iValue2 );
    
    fRet= Percentage(iValue1,iValue2);

    printf(" Percentage is %f", fRet);
    
    return 0;
}