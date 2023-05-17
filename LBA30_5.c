#include<stdio.h>
#include<stdlib.h>
struct  node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn ->data = no;
    newn-> next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn ->next= *First;
        *First = newn;
    }

}
void Display(PNODE First)
{
    printf("Elements of Linked List are:\n");
    while (First  != NULL )
    {
        printf("| %d |->", First-> data);

        First = First->next;
    }
    printf("NULL\n");
    
}

int Count(PNODE First)
{
    int iCnt =0;
    while (First  != NULL )
    {
        iCnt++;;

        First = First->next;
    }
    return iCnt;
    
}


int Large(PNODE First)
{
    int iCnt =0;
    int iDigit =0;
    int iLarge =0;
    int iNo =0;

    while ((First != NULL))
    {
        iNo = (First->data);
        int iLarge=0;
        iLarge= iNo%10;

        for(iCnt =1;iNo != 0; iCnt++)
        {
         
        iDigit= (iNo)%10;
        
        if(iLarge < iDigit)
        {
            iLarge=iDigit;
        }

         iNo = (iNo)/10;
        }
         
         printf("%d\t",iLarge);
        
        First = First -> next;

    }
}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 415);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 110);

    Display(Head);

    Large(Head);


    return 0;
}


 

