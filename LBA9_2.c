#include<stdio.h>

int Display(int iNo)
{
    int iDol = 0;
    int iRupee =1;
    iDol = 70;
    iRupee = iNo*iDol;

    return iRupee;
    
}
int main()
{
    int iValue =0;

    int iRet =0;
    printf("Enter the Number:\n");
    scanf("%d", &iValue);
    
    iRet = Display(iValue);

    printf("Value in INR is %d",iRet);


  return 0;
}