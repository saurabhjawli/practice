
#include<stdio.h>
#include<stdlib.h>

int Display(int Arr [], int iLength)
{
    int iCnt =0;

      for (iCnt = 0; iCnt <iLength; iCnt ++)
    {
    if(Arr[iCnt]%2 == 0)
    {
      if(Arr[iCnt]%5 == 0)
      {
         printf("%d\n",Arr[iCnt]);
      }

    }
    }
  
}
int main()
{
    int iSize = 0,i = 0 ;
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

    printf(" Even numbers Divisible by 5 are:\n");

    Display(p,iSize);

    free(p);

    return 0;

}