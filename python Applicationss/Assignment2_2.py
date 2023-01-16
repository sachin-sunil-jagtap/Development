
def Display(Value):
        for i in range(0,Value,1):
            for j in range(0,Value,1):
                print("*",end = "  ")
            print("\r")


def main():
    print("Enter the number :")
    no= int(input())

    Display(no)

if __name__ == "__main__":
    main()
