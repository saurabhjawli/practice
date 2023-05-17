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


int Reverse(PNODE First)
{
    int iCnt =0;
    int iDigit =0;
    int iRev =0;
    int iNo =0;

    while ((First != NULL))
    {
        iNo = (First->data);
        int iRev =0;

        for(iCnt =1;iNo != 0; iCnt++)
        {
         iDigit = iNo;
        iDigit= (iDigit)%10;
        iRev = (iRev*10)+iDigit;

         iNo = (iNo)/10;
        }
         
        printf("%d\t",iRev);
        First = First -> next;

    }
}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head, 11);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 217);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);


    Display(Head);

    Reverse(Head);


    return 0;
}


 

