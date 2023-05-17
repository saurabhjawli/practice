#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iLength,int iS, int iE)
{
  int iCnt = 0;

  for (iCnt = 0; iCnt< iLength; iCnt++)
  {
    if( Arr[iCnt]> iS && Arr[iCnt]<iE)
    {
      printf("%d\n", Arr[iCnt]);
    }
  }
}

int main()
{
  int iSize = 0,iStart = 0,iEnd = 0;
  int i = 0;
  int *p = NULL;

  printf("Enter number of elements:\n");
  scanf (" %d", &iSize);

  printf("Enter starting number of range:\n");
  scanf (" %d", &iStart);

  printf("Enter ending number of range:\n");
  scanf (" %d", &iEnd);

  p = (int*)malloc(iSize * sizeof(int));
  
   if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

  for(i = 0; i < iSize; i++)
  {
    printf("Enter element %d:\n", i +1);

    scanf("%d" ,&p [i]);
  }
  
  printf("Numbers in the range are:\n");

  Display(p,iSize,iStart,iEnd);

  return 0;
}