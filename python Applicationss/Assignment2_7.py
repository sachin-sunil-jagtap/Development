

def Display(No):
    for i in range(1,No+1,1):
        for j in range(1,No+1,1):            
                print(j,end =" ")
        print(" ")

def main():
    print("Enter the number you want to Enter :")
    No = int(input())

    Display(No)   

if __name__ == "__main__":
    main()