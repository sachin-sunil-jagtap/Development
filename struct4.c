#include<stdio.h>

struct Demo
{
    const int i;
   const  int j;
};

int main()
{
    struct Demo obj = {11,21};
      // obj.i=11;  member by member not allow
	  //obj.j=21;   
    printf("%d\n",obj.i);
    printf("%d\n",obj.j);
      
     //obj.i++;  not allowed

    return 0;
}














