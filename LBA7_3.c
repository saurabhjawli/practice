#include<stdio.h>
void Display(int iNo)
{
    int iCnt = - iNo;

    for(iCnt; iCnt <=iNo;iCnt++)
    {
        printf("%d\t", iCnt);
    }

}
int main()
{
    int iValue =0;
    printf("Enter the value:\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}