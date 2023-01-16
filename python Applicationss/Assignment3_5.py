
def ChkPrime(Brr):
    for i in range(2,len(Brr)):
        for j in range(2,i):
            if i % j !=0:
                print(j)


def ListPrime():
    Arr = list()
    print("How many element you want to store :")
    size = int(input())

    print("Enter the element :")
    for i in range(2,size+2):
        no = int(input())
        Arr.append(no)
    print("element in the list are :",Arr)    

    ChkPrime(Arr)


def main():
    ListPrime()










if __name__ == "__main__":
    main()