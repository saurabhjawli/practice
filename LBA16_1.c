
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(int Arr [], int iLength, int iNo)
{
    int iCnt =0;


      for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
     if(Arr[iCnt] == iNo)
    {
      return TRUE;
    }
   
    }


}
int main()
{
    int iSize = 0,i = 0 ;
    BOOL bRet = FALSE;
    int *p = NULL;
    int iValue = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the number:\n");
    scanf("%d",&iValue);

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


    bRet =Display(p,iSize,iValue);

   if (bRet == TRUE)
   {
    printf("Number is present");
   }
   else
   {
    printf("Number is not present");
   }

    free(p);

    return 0;

}

