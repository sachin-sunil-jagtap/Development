#include<iostream>
using namespace std;

class Base1
{
      public:
        int i,j;
        Base1()
        {
            cout<<"Base1 constrcutor\n";
        }
        ~Base1()
        {
            cout<<"Base1 destructor\n";
        }
};

class Base2
{
      public:
        int x,y;
        Base2()
        {
            cout<<"Base2 constrcutor\n";
        }
        ~Base2()
        {
            cout<<"Base2 destructor\n";
        }
};

class Derived : public Base1,  Base2
{
    public:
        int a;

        Derived()
        {
            cout<<"Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"Derived derstructor\n";
        }
};

int main()
{
    Derived dobj;
    
    return 0;
}