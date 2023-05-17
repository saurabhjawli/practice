#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 1;
    int iTable = 1;

    
    for(iCnt=1; iCnt<=10; iCnt++)
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
    
    printf("Table of Number %d is :\n",iValue);

    Table(iValue);


  return 0;
}