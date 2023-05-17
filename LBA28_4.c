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

int Max(PNODE First)
{
    
    int iMax= 0;
    while (First != NULL)
    {
        if (iMax < (First->data))
        {
            iMax = First->data;
        }
        
        First = First->next;

    }
    return (iMax);

}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    Display(Head);

    iRet = Max(Head);

    printf("Largest elements is :%d", iRet);

    return 0;
}