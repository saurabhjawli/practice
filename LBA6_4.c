#include<stdio.h>

int Multiply (int iNo1,int iNo2,int iNo3)
{
    int iMult = 0;

    if(iNo1 == 0)
    {
    iNo1 =iNo1 +1;
    }
    else if (iNo2 == 0)
    {
    iNo2 =iNo2 + 1;
    }
    else if (iNo3 == 0)
    {
     iNo3 =iNo3 + 1;
    }
    
    iMult = iNo1*iNo2*iNo3;

    return iMult;
 
}

int main()
{
    int iValue1 =0, iValue2 =0, iValue3 =0;
    int iRet =0;

    printf("Enter the three number:\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3 );
    
    iRet= Multiply (iValue1,iValue2,iValue3);

    printf(" Multiplication of 3 numbers is %d", iRet);
    
    return 0;
}