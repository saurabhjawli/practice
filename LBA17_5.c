#include<stdio.h>
#include<stdlib.h>
int Display( int Arr[], int iLength)
{
  int iCnt = 0;
  int iDigit = 0;
  int iSum = 0;
  int iCnt1 =0;
  int iNo =0;
  
  for (iCnt = 0; iCnt<iLength ;iCnt++)
  {
    iNo = Arr[iCnt];
    iSum =0;
    for (iCnt1 = 0; iCnt1<iLength ;iCnt1++)
    {
    iDigit = (iNo % 10);
    iSum = iSum +iDigit;
    iNo = iNo /10;
    }
    printf("%d\t", iSum);


  }


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

  printf("Enter the elements:\n");

  for (i =0; i <iSize;i++)
  {
    scanf("%d", &p[i]);
  }
  printf("Summation of number is :\n");

  Display(p,iSize);
   
  return 0;
}