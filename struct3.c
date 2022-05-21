#include<stdio.h>

struct Demo
{
    int i;
    int j;
};

int main()
{
    const struct Demo obj = {11,21};

    //obj.i=11;      const keyword dilyamule ithe initialize krta yet nahi 
	//obj.j=21;       ani const vaprlyamule member initialization vapartat
    printf("%d\n",obj.i);
    printf("%d\n",obj.j);
    
    return 0;
}














