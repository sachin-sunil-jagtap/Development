

def Fact(Value):
    Ans = 0
    for i in range(1,Value,1):
        if Value % i == 0:
            Ans = Ans + i
    return Ans
            
def main():
    print("Enter the number you want to Enter :")
    No = int(input())

    Ret = Fact(No)
    print("Factorial of number are : ",Ret)


if __name__ == "__main__":
    main()