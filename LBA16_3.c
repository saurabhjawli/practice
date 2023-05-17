
#include<stdio.h>
#include<stdlib.h>



int Display(int Arr [], int iLength, int iNo)
{
    int iCnt =0;


      for (iCnt = iLength; iCnt >(-1); iCnt --)
    {
     if(Arr[iCnt] == iNo)
    {
      return iCnt;
    }
   
    }
    return -1;


}
int main()
{
    int iSize = 0,i = 0 ;
    int iRet = 0;
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


    iRet =Display(p,iSize,iValue);

     printf("Index of first occurance of element is: %d\n", iRet);


    free(p);

    return 0;

}

