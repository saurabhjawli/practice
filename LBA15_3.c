#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(int Arr [], int iLength)
{
    int iCnt =0;


      for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
     if(Arr[iCnt] == 11)
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


    bRet =Display(p,iSize);

   if (bRet == TRUE)
   {
    printf("11 is present");
   }
   else
   {
    printf("11 is not present");
   }

    free(p);

    return 0;

}