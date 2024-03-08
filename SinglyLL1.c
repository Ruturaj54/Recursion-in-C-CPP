// ***************Singly Linear Linked List**********************

#include<stdio.h>
#include<stdlib.h> // malloc,calloc,realloc free


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE Temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }

}


void Display(PNODE First)
{
    printf("Contents of Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d | -->",First->data);
        First = First ->next;
    }printf("NULL\n");
}

int Count(PNODE First)
{
    PNODE Temp = First;
    int iCnt = 0;

    while(Temp != NULL)
    {
        Temp = Temp->next;
        iCnt++;
    }
    return iCnt;

}

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = NULL;
    if(*Head == NULL)
    {
        printf("NO Contents in LinkedList...\n");
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head == NULL;
    }
    else
    {
        Temp = (*Head)->next;
        free(*Head);
        *Head = Temp;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head == NULL)
    {
        printf("No Contents in LinkedList....\n");
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head == NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void InsertAtPos(PPNODE Head,int No,int iPos)
{
    PNODE Temp = *Head;
    int Size = 0;
    Size = Count(*Head);
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(iPos < 1 || iPos > Size + 1)
    {
        printf("Invalid Position, Please Enter valid position...");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(Head,No);
    }
    else if(iPos == Size)
    {
        InsertLast(Head,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;

        for(int i = 1;i < iPos - 1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next->next;
        Temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head,int iPos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE Temp = *Head;
    PNODE Tempx = NULL;

    if(*Head == NULL)
    {
        printf("Linked List is Empty...\n");
        return;
    }
    else if(iPos < 1 || iPos > Size)
    {
        printf("Invalid Position ..\n");
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(int i = 1;i < iPos - 1;i++)
        {
            Temp = Temp->next;
        }
        Tempx = Temp->next->next;
        free(Temp->next);
        Temp->next = Tempx;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;   

    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,101);

    Display(First);

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,51);
    InsertLast(&First,101);

    Display(First);

    DeleteFirst(&First);
    DeleteLast(&First);

    iRet = Count(First);
    printf("Number of Nodes are : %d\n",iRet);

    Display(First);

    //InsertAtPos(&First,00,1);
    DeleteAtPos(&First,4);

    Display(First);

    return 0;
}