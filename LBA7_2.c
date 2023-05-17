#include<stdio.h>
void Pattern(int iNo)
{
    if (iNo <0)
    if (iNo <0)
    {
        iNo = -iNo ;
    }
    
    int iCnt =1;

    for(iCnt = 1; iCnt <=iNo;iCnt++)
    {
        printf("%d\t", iCnt);
    }

}
int main()
{
    int iValue =0;
    printf("Enter the value:\n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}