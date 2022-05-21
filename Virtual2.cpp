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
    Base *bp = new Base();      // No casting
    Deried *dp = new Deried();  // No casting

    Base *bp1 = new Deried();   // Upcasting
    // Deried *dp1 = new Base();   // Downcasting

    return 0;
}