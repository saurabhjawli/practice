
#include<stdio.h>
void PrintEven(int iNo)
{
   int iCnt =0;
    printf("Even Numbers are :\n");

   for (iCnt =1;iCnt <= (iNo*2); iCnt++)
   {
    if(iCnt%2 == 0)
    {
        
        printf(" %d\n",iCnt);
    }
   }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;

}