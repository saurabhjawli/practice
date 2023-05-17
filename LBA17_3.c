#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[], int iLength)
{
  int iCnt = 0;
  int iMin= Arr[0];
  int iMax = 0;
  int iAns =0;

  for (iCnt = 0; iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]<iMin )
    {
      iMin = Arr[iCnt];
    }

    if(Arr[iCnt]>iMax )
    {
      iMax = Arr[iCnt];
    }
    
  }

  iAns = iMax - iMin;
  return iAns;

}
int main ()
{
  int i = 0;
  int *p = NULL;
  int iSize = 0;
  int iRet =0;

  printf("Enter the size of elements:\n");
  scanf ("%d",&iSize);

  p = (int *) malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter the elemnts:\n");

  for (i =0; i <iSize;i++)
  {
    scanf("%d", &p[i]);
  }

  iRet = Display(p,iSize);

  printf("Difference is:%d\n",iRet);



  return 0;
}