
def Display(No):
    if(No > -0):
        No = No -1   
        Display(No)
        print(No,end =" ")  


def main():
    print("Enter the Number :")
    No = int(input())

    Display(No)

if __name__ == "__main__":
    main()