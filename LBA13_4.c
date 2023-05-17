
#include<stdio.h>

int ChkZero(int iNo)
{
    int iDigit =0;
    int iCnt = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        iNo = iNo /10;

         if(iDigit==0)
        {
           iDigit = 1;
        }
        
        iCnt = iCnt * iDigit;
       
    }
    return iCnt;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet= ChkZero(iValue);
    printf("%d\n",iRet);

    return 0;

}