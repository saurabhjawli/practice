#include<stdio.h>
#include<stdlib.h>
int Maximum( int Arr[], int iLength)
{
  int iCnt = 0;
  int iMax = 0;

  for (iCnt = 0; iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]>iMax )
    {
      iMax = Arr[iCnt];
    }
   
  }
  return iMax;

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

  iRet = Maximum(p,iSize);

  printf("Largest number is:%d\n",iRet);



  return 0;
}