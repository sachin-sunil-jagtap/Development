#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        // Charactristics

    public:
        // Behaviours
        void Accept()       // Setter
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      // Getter
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        int Factorial()
        {
            int iFact = 1;
            int iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact *= iCnt;  //iFact = iFact * iCnt;
            }
            return iFact;
        }
};

int main()
{
    Number nobj1;
    Number nobj2;

    int iRet = 0;

    nobj1.Accept();
    nobj1.Display();
    iRet = nobj1.Factorial();
    cout<<"Factorial is : "<<iRet<<endl;

    nobj2.Accept();
    nobj2.Display();
    iRet = nobj2.Factorial();
    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}