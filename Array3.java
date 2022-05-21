import java.lang.*;
import java.util.*;

class Array3
{
    public static void main(String arg[])
    {
            int i = 0, j = 0;
            // arr is 2 dimentional array which contains 2 one diemntional array
            // each one dimentional array contains 3 elemnets and each element 
            // is of type integer.
            int arr[][] = new int[2][3];

            arr[0][0] = 11;
            arr[0][1] = 21;
            arr[0][2] = 51;
            arr[1][0] = 101;
            arr[1][1] = 111;
            arr[1][2] = 121;

            // arr.length       2
            // arr[0].langth    3
            // arr[1].length    3
            
            //        1             2              3
            for(i = 0; i < arr.length; i++)     // Outer
            {           //  1               2                3
                    for(j = 0; j < arr[i].length; j++ )     // Inner
                    {
                            System.out.println(arr[i][j]);      // 4
                    }
            }
    }
}