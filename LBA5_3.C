#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt =0;

    for(iCnt = 1 ; iCnt<iNo ; iCnt ++)
    {
        if((iNo%iCnt) != 0)
        {
            printf("Non factors are: %d\n", iCnt);
        }
    }


}

int main()
{
    int iValue =0;
    printf("Enter Number:\n");
    scanf("%d", &iValue);

    FactRev(iValue);
    return 0;

}