
#include<stdio.h>

int ChkZero(int iNo)
{
    int iDigit =0;
    int iEven = 0;
    int iOdd =0;
    int iAns =0;


    if(iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo>0)
    {
        iDigit = iNo%10;
        iNo = iNo /10;

        if(iDigit%2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else
        {
            iOdd = iOdd + iDigit;
        }

        iAns = iEven - iOdd;
       
    }
    return iAns;

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