#include "Header163.h"

int main()
{
    int iRet=0;
	
	DoublyCLL obj;
	
	obj.InsertFirst(121);
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(201);
	
	obj.Display();
	iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;
	
	obj.InsertAtPos(151,4);
	
	obj.Display();
	iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;
	
	obj.DeleteAtPos(4);
	
	obj.Display();
	iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;
	
	

    return 0;
}
