import Arithmatic

def main():
    print("Enter the First Number")
    No1 = int(input())

    print("Enter the Second Number")
    No2 = int(input())

    Ret = Arithmatic.Add(No1,No2)

    print("Addition is : ",Ret)

    Ret = Arithmatic.Sub(No1,No2)

    print("Substraction is : ",Ret)

    Ret = Arithmatic.Mult(No1,No2)

    print("Multiplication is : ",Ret)

    Ret = Arithmatic.Div(No1,No2)

    print("Division is : ",Ret)


if __name__ == "__main__":
    main()
