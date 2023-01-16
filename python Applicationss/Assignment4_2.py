
Mult = lambda value1,value2:value1*value2

def main():

    print("Enter the first number :")
    No1 = int(input())

    print("Enter the second number :")
    No2 = int(input())

    Ret =Mult(No1,No2)
    print("Multiplication  is :",Ret)

    print("Type of lambda function is : ",type(Mult))


if __name__ == "__main__":
    main()