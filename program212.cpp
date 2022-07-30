#include<iostream>
using namespace std;

void Display(int Arr[], int size)
{
       int i = 0;
       for(i = 0; i < size;i++)
       {
            cout<<Arr[i]<<endl;
       }
}

int main()
{
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;
}