import threading

def evenfactor(No):
    Ans =0
    for i in range(1,No+1,1):
        if(No % i == 0):
            if(i % 2 == 0):
                Ans = i + Ans
    print("Addition of even element is :",Ans)
            
          

def oddfactor(No):
    Ans =0
    for i in range(1,No+1,1):
        if(No % i != 0):
            if(i % 2 != 0):
                Ans = i + Ans
    print("Addition of odd element is :",Ans)

def main(): 

    print("Enter the number you want to enter")  
    Number = int(input())

    t1 = threading.Thread(target = evenfactor, args = (Number,))
    t2 = threading.Thread(target = oddfactor, args = (Number,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Exit from main")

if __name__ == "__main__":
    main()