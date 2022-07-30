import java.lang.*;
import java.util.*;
import MarvellousMatrix.Matrix;

class MyMatrix extends Matrix
{
        public MyMatrix(int a, int b)
        {
            super(a,b);
        }

        public void SwapCol()
        {
            int iTemp = 0;

            for(int i = 0; i < iRow; i++)
            {
                for(int j = 0; j< iCol-1;j+=2)
                {
                        iTemp = Arr[i][j];
                        Arr[i][j] = Arr[i][j+1];
                        Arr[i][j+1] = iTemp;
                }
            }
        }
}

class program336
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int X = sobj.nextInt();

        System.out.println("Enter number of columns");
        int Y = sobj.nextInt();

        MyMatrix mobj  = new MyMatrix(X,Y);
        mobj.Accept();
        mobj.Display();

        mobj.SwapCol();
        System.out.println("Data after swapping is :");
        mobj.Display();

    }
}