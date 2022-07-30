#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head != NULL)
    {
        newn->next = *Head;
    }
    *Head = newn;
}

void Display(PNODE Head)
{
    printf("Elements of linked list are : \n");
    while(Head != NULL)
    {
        printf("|%d|-> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}

void DeleteEven(PPNODE Head)
{
    PNODE tempHead = *Head;
    PNODE Previous = NULL;
    PNODE temp = NULL;

    if(*Head == NULL)   // LL is empty
    {
        return;
    }
    // 10       20      31      41      50

    while(tempHead != NULL)
    {
        if(tempHead->data % 2 == 0)
        {
            if(tempHead->next != NULL)
            {
                tempHead->data = tempHead->next->data;
                temp = tempHead->next;
                tempHead ->next = temp->next;
                free(temp);
            }
            else
            {
                if(tempHead->next == NULL)
                {
                    free(tempHead);
                    Previous->next = NULL;
                }
            }
        }
        else
        {
            Previous = tempHead;
            tempHead = tempHead->next;
        }
    }
}

void EvenDisplay(PNODE Head)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if((Head->data % 2) == 0)
        {
            printf("Position : %d Data : %d\n",iPos,Head->data);
        }
        Head = Head->next;
        iPos++;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,50);
    InsertFirst(&First,41);
    InsertFirst(&First,31);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    InsertFirst(&First,21);
    InsertFirst(&First,22);
    InsertFirst(&First,50);

    Display(First);
    EvenDisplay(First);

    return 0;
}






























