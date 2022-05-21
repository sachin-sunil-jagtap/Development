#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Deried : public Base
{
    public:
        int i,j;
};

int main()
{
    // static memory
    Base bobj;
    Deried dobj;

    // Dynamic memory
    Base *bp = new Base();
    Deried *dp = new Deried();

    return 0;
}