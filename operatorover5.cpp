#include<iostream>
using namespace std;

class Demo
{
    public:     // private
        int x;
        int y;

        Demo(int i = 0, int j = 0)
        {
            x = i;
            y = j;
        }
};

Demo operator +(Demo op)
{
        return op;
}

Demo operator -(Demo op)
{
        return Demo(-op.x,-op.y);
        // return -op;
}

int main()
{
    Demo obj1(11,-21);
    Demo obj2(51,-101);
    Demo robj1(0,0);
    Demo robj2(0,0);

    robj1 = +obj1;          // +(obj1)
    cout<<robj1.x<<"\n";    // 11
    cout<<robj1.y<<"\n";        // -21

    robj2 = -obj2;          // -(obj2)
    cout<<robj2.x<<"\n";        // -51
    cout<<robj2.y<<"\n";        // 101

    return 0;
}