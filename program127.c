#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;          // *
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head)
{}

int Count(PNODE head)
{
    return 0;
}

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        // *

    if(*head == NULL)       // If LL is empty
    {
           *head = newn;
    }
    else        // LL contains atleast one node
    {
            newn -> next  = *head;
            (*head) -> prev = newn;       // *
            *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;        // *

    if(*head == NULL)       // If LL is empty
    {
           *head = newn;
    }
    else        // LL contains atleast one node
    {

    }
}

void DeleteFirst(PPNODE head)
{}

void DeleteLast(PPNODE head)
{}

void InsertAtPos(PPNODE head, int no, int pos)
{}

void DeleteAtPos(PPNODE head, int pos)
{}

int main()
{
    PNODE first = NULL;


    return 0;
}



