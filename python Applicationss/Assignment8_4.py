
def Fact(No):
    if(No <=0):
        return 1
    else:
        return (No + Fact(No-1))

def main():
    print("Enter the Number :")
    No = int(input())

    Ret =Fact(No)
    print("Result is :",Ret)

if __name__ == "__main__":
    main()