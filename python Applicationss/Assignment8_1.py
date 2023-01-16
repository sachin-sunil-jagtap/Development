
def Display(No):
    if(No > 0):
        print("*",end =" ")
        No = No -1
        Display(No)


def main():
    print("Enter the Number :")
    No = int(input())

    Display(No)

if __name__ == "__main__":
    main()