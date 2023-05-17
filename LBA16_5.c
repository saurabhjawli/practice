#include<stdio.h>
#include<stdlib.h>
int Product ( int Arr[], int iLength)
{
  int iCnt = 0;
  int iMult = 1;

  for (iCnt = 0; iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]%2 != 0 )
    {
      iMult = iMult * Arr[iCnt];
    }
    else
    {
      iMult = 0;
    }
  }
  return iMult;

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

  iRet = Product(p,iSize);

  printf("Product of odd elements is:%d\n",iRet);



  return 0;
}