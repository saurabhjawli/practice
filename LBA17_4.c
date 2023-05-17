#include<stdio.h>
#include<stdlib.h>
void Display( int Arr[], int iLength)
{
  int iCnt = 0;
  
  for (iCnt = 0; iCnt<iLength ;iCnt++)
  {
    if(Arr[iCnt]>99 && Arr[iCnt]< 1000 )
    {
      printf("%d\n",Arr[iCnt]);
    }
  }

}
int main ()
{
  int i = 0;
  int *p = NULL;
  int iSize = 0;

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
  printf("3 Digit numbers are:\n");

  Display(p,iSize);


  return 0;
}