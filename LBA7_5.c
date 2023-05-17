#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 1;

    for(iCnt =1; iCnt <=5;iCnt++)
    {
    
        printf("%d\t", iCnt * iNo);
        
    }

}
int main()
{
    int iValue =0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}