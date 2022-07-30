#include<stdio.h>
#include<stdlib.h>

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

int Summation(PNODE Head)
{
    int iSum =0;

    while(Head!= NULL)
    {
        iSum = iSum + (Head->data);
        Head = Head->next;
    }
    return iSum;
}

int Maximum(PNODE  Head)
{
    int iMax = 0;
    if(Head != NULL)
    {
        iMax = Head->data;
    }

    while(Head != NULL)
    {
        if(Head->data > iMax)
        {
            iMax = Head->data;
        }
        Head = Head->next;
    }
    return iMax;
}

int Frequency(PNODE Head, int iNo)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iCnt++;
        }
        Head = Head->next;
    }
    return iCnt;
}

void DisplayPerfect(PNODE Head)
{
    int iNo = 0, i = 0, iSum = 0;

    while(Head != NULL)
    {
        for(i = 1, iSum = 0, iNo = Head -> data; i <= iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == iNo)
        {
            printf("%d is perfect number\n",iNo);
        }

        Head = Head -> next;
    }

}

void SumDigits(PNODE Head)
{
    int iSum = 0, iNo = 0;

    while(Head != NULL)
    {
        iNo = Head->data;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo /10;
        }
        printf("%d : %d\n",Head->data, iSum);
        iSum = 0;
        Head = Head -> next;
    }
}

int SearchLastOccurance(PNODE Head, int iNo)
{
    int iPos = -1, iCnt = 1;

    while(Head != NULL)
    {
        if(Head->data == iNo)
        {
            iPos = iCnt;
        }
        iCnt++;
        Head = Head -> next;
    }

   return iPos;

}

int MiddleElement(PNODE Head)
{
    int iSize = 0;
    int i = 0;
    PNODE temp = Head;

    while(Head != NULL)
    {
        iSize++;
        Head = Head->next;
    }
    Head = temp;

    for(i = 0; i < iSize/2; i++)
    {
           Head = Head->next;
    }
    return Head->data;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,6);
    InsertFirst(&First,28);
    InsertFirst(&First,496);
    InsertFirst(&First,24);
    InsertFirst(&First,28);
    InsertFirst(&First,22);


    Display(First);

    iRet = MiddleElement(First);
    printf("Middle element is : %d\n",iRet);

    return 0;
}
