
def ChkPrime(Value):
    if Value % 2 == 0:
        return True
    else:
        return False

def main():
    print("Enter the number you want to Enter :")
    No = int(input())

    Ret = ChkPrime(No)
    if Ret == True:
        print("Number is prime")
    else:
        print("Number is  not Prime")
    

if __name__ == "__main__":
    main()