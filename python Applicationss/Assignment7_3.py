import threading

def thread1(No):
    for i in range(1,No+1,1):
        print("ascending order",i)         

def thread2(No):
    for i in range(No,0,-1):
        print("reverse order",i)
      

def main(): 

    print("Enter the number you want to enter")  
    Number = int(input())

    p1 = threading.Thread(target = thread1, args = (Number,))
    p2 = threading.Thread(target = thread2, args = (Number,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    print("Exit from main")

if __name__ == "__main__":
    main()