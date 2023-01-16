import threading

def DisplayEven(No):
    Cnt =0
    for i in range(1,No,1):
        if(i % 2 == 0):
            Cnt = Cnt+1
            if Cnt<=10:
                print("Even number : ",i)
          

def DisplayOdd(No):
    Cnt =0
    for i in range(1,No,1):
        if(i % 2 != 0):
            Cnt =Cnt+1
            if Cnt<=10:
                print("Odd number : ",i)

def main():   
    Number = 200

    p1 = threading.Thread(target = DisplayEven, args = (Number,))
    p2 = threading.Thread(target = DisplayOdd, args = (Number,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

if __name__ == "__main__":
    main()