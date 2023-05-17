#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt =0;
    int iMult = 1;

    for(iCnt = 1 ; iCnt<iNo ; iCnt ++)
    {
        if((iNo%iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
        
    }
    return iMult;


}

int main()
{
    int iValue =0;
    int iRet =0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = FactRev(iValue);

    printf("Summation of Non Factors is: %d",iRet);
    return 0;

}