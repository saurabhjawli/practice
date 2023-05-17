
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr [], int iLength, int iElement)
{
    int iCnt =0;

      for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
    if(Arr[iCnt] == Arr[iElement])
    {
      printf("%d\n",Arr[iCnt]);
    }
    }
  
}
int main()
{
    int iSize = 0,i = 0 ;
    int *p = NULL;
    int iIndex = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter the index number :\n");
    scanf("%d",&iIndex);

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

    printf(" Numbers Divisible by 5 are:\n");

    Display(p,iSize,iIndex);

    free(p);

    return 0;

}