
#include<stdio.h>
void DisplayFactors(int iNo)
{
    int i=0;

    if(iNo<0)
    {
        iNo= -iNo;
    }
    
    
    for(i=1;i<iNo;i++)
    {
        
        if(i%2==0 && iNo%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;

}