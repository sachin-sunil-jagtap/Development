
def Display(Value):
    iCnt =0
    while Value > 0:        
        Value = Value // 10       
        iCnt = iCnt+1
    print(iCnt)


def main():
    print("Enter the Number")
    No = int(input())

    Display(No)

if __name__ == "__main__":
    main()