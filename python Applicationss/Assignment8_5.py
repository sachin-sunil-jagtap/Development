
def Add(No):
    Digit =0
    Ans =0
    while(No > 0):
        Digit = No % 10
        Ans = Digit+Ans
        No = No //10
    return Ans
        
def main():
    print("Enter the Number :")
    No = int(input())

    Ret =Add(No)
    print("Result is :",Ret)

if __name__ == "__main__":
    main()




