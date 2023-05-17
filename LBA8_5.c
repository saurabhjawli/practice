#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iTable = 1;

    if(iNo <0)
    {
        iNo = -iNo;
    }

    for(iCnt= 10; iCnt>0; iCnt--)
    {
        iTable = iNo * iCnt;

        printf("%d\n",iTable);
    }
    
}
int main()
{
    int iValue =0;

    int iRet =0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);
    
    printf("Reverse table of Number %d is :\n",iValue);

    Table(iValue);


  return 0;
}