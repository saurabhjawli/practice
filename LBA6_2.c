#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return TRUE;
    }
    return FALSE;
  
}
int main()
{
    int iValue =0;
    BOOL Bret = FALSE;

    printf("Enter the number:\n");
    scanf("%d",&iValue );

    Bret = ChkGreater(iValue);

    if(Bret == TRUE)
    {
        printf("Greater");
    }   
    else
    {
        printf("Smaller");
    } 
  
    return 0;
}