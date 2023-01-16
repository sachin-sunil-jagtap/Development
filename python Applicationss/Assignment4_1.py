
Power = lambda value:value**2


def main():

    print("Enter the number :")
    No = int(input())

    Ret =Power(No)
    print("power is :",Ret)

    print("Type of lambda function is : ",type(Power))


if __name__ == "__main__":
    main()