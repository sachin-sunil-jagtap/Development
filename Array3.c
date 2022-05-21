#include<stadio.h>

int main()
{
    // Arr is one dimentional array which
    // contains 4 elements and each element
    // is of type integer.
    int Arr[4];

    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 40;

    // Brr is two dimentional array
    // which contains 3 one dimentional array
    // each one dimentional array contains 4 elements
    // and each element is of type integer.
    int Brr[3][4];

    Brr[0][0] = 10;
    Brr[0][1] = 11;
    Brr[0][2] = 12;
    Brr[0][3] = 13;
    Brr[2][1] = 101;


    return 0;
}







// Arr is 2 dimentional array
// which contains 5 one dimentional array
// each one dimentional array contains 3 elements
// each element is of type double.

double Arr[5][3];










int no = 11;

// p is a pointer which holds
// address of integer
// currently it holds address of no

// where no is a variable
// of type integer initialised with the
// value 11

int *p = &no;


//  no                      11
//  &no                     100
//  p                           100
//  &p                         200
//  *p                          11
// sizeof(no)               4
// sizeof(p)                8
// sizeof(*p)               ???












