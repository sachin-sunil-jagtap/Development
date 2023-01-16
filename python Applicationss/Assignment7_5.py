import threading

def evenlist(No,size):
    Ans =0
    for i in range(1,size+1,1):
        if(i % 2 == 0):
            Ans = i + Ans
    print("Addition of even element is :",Ans)
            
          

def oddlist(No,size):
    Ans =0
    for i in range(1,size+1,1):
        if(i % 2 != 0):
            Ans = i + Ans
    print("Addition of odd element is :",Ans)

def main(): 

    Arr = list()
    print("Enter how many elements you want to store?")
    size = int(input())

    print("Please enter the values")

    for i in range(0,size):
        no = int(input())
        Arr.append(no)

    t1 = threading.Thread(target = evenlist, args = (Arr,size,))
    t2 = threading.Thread(target = oddlist, args = (Arr,size,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Exit from main")

if __name__ == "__main__":
    main()