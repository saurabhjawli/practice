#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

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

void Prime(PNODE First)
{
    int iCnt =1;
    int iPrime =0;

     while (First != NULL)
    {
        
        iPrime =0;
        for(iCnt=1;iCnt < (First->data); iCnt++)
        {
          if((First ->data) %iCnt == 0)
        {
            iPrime++;
        }
        }

        if(iPrime==1)
        {
            printf ("%d\n", First->data);
        }

        
        First = First->next;

    }
    

}

int main()
{
    PNODE Head = NULL;
    int iRet =0;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);


    Display(Head);

    printf("Prime numbers are :\n");
    Prime(Head);

    return 0;
}