#include<stdio.h>
#include<stdlib.h>


int Display(int Arr [], int iLength, int iValue)
{
    int iCnt =0;

    int iFreq = 0;


    for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
     if(Arr[iCnt] == iValue)
    {
      iFreq++;
    }
   
    }
    return iFreq;


}
int main()
{
    int iSize = 0,i = 0 ;
    int iRet = 0;
    int *p = NULL;
    int iNo = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the number you want to check frequency for:\n");
    scanf("%d",&iNo);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
   
    for (i = 0; i< iSize; i++)
    {
        printf("Enter element : %d\n", i+1);
        scanf("%d", &p [i]);
    }


    iRet =Display(p,iSize,iNo);

    printf("Frequency of 11 is: %d", iRet);

   

    free(p);

    return 0;

}