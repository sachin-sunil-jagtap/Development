
Ans = 0

def Display(Value):
    sum = 0
    while Value > 0:
        sum = sum + Value % 10
        Value = Value//10
        
    return sum


def main():
    print("Enter the Number")
    No = int(input())

    Ret =Display(No)
    print("Addition is : ",Ret)

if __name__ == "__main__":
    main()