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


int Max(PNODE First)
{
    
    int iMax= 0;
    int iSmax =0;
    
    while (First != NULL)
    {
        if ((First->data)>iMax)
        {
            iSmax = iMax;

            iMax = First->data;
        }
        else if ( iSmax <(First->data) && (First->data) != iMax)
        {
            iSmax = (First->data);
        }
        
        First = First->next;

    }
    return (iSmax);

}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head, 60);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);
    InsertFirst(&Head, 70);
    InsertFirst(&Head, 50);


    Display(Head);

    iRet = Max(Head);

    printf(" Second Largest elements is :%d", iRet);

    return 0;
}


 

