#include<stdio.h>
#include<stdlib.h>

struct outer
{
    float f;
    int i;
    struct inner
    {
        int x;
        int y;
    };
};

union Demo
{
    int no;
    char * ch;
    double d;
};

int main()
{
int no = 3;
int *p = &no;

printf("%d\n",sizeof(no));  // 4
printf("%d\n",sizeof(p));   // 8

    return 0;
}

int Arr[3][2] = {1,2,3,4,5,6};


Arr[0][0]

*(*(Arr + 0) + 0)


Arr[2]

*(Arr + 2)







