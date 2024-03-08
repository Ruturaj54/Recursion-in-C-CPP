//*********Linked List DataStructure****************

#include<stdio.h> //printf and scanf
#include<stdlib.h> //Dynamic memeory (malloc,calloc,realloc,free)

//We done Structure Declaration here ,The Memory for structure will not be allocated
struct node
{
    int data;
    struct node *next; //here it is self referencing structure 
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void FirstInsert(PPNODE Head,int No)
{
    PNODE nobj = NULL;

    nobj = (PNODE)malloc(sizeof(NODE));

    nobj->data = No;
    nobj->next = NULL;

    if(*Head == NULL)
    {
        *Head = nobj;
    }
    else
    {
        nobj->next = *Head;
        *Head = nobj;
    }


}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");

}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
       iCnt++;
       First = First->next;
    }
    return iCnt;
}

int main() //Entry point function
{
     int iRet = 0;
   PNODE First = NULL; 
   int Num = 0;
   int arry[Num];

   printf("Enter Numbers of nodes : \n");
   scanf("%d",&Num);

   printf("Enter the Data values : \n");
   for(int i = 0;i < Num;i++)
   {
        scanf("%d",&arry[i]);
   }

   for(int i = 0;i < Num;i++)
   {
        FirstInsert(&First,arry[i]);
   }
   
   Display(First);

  

   iRet = Count(First);

   printf("Number of Node is : %d \n",iRet);

    return 0;
}