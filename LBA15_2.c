
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr [], int iLength)
{
    int iCnt =0;
    int iEvenCnt =0;
    int iOddCnt =0;
    int iAns = 0;


      for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
     if(Arr[iCnt]%2 == 0)
    {
      iEvenCnt++;
    }
    else
    {
      iOddCnt++;
    }
    }

    iAns = iEvenCnt - iOddCnt;

    
    return iAns;
  
}
int main()
{
    int iSize = 0,i = 0 ;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

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


    iRet =Display(p,iSize);

    printf(" Difference in Frequency of even  and odd numbers is: %d\n", iRet);


    free(p);

    return 0;

}