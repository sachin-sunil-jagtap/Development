import time
import threading


def small(value):
    for x in value:
        if x >='a' and x <= 'z':
            print("Small letters are :",x)



def capital(value):
    for x in value:
            if x >='A' and x <='Z':
                print("capital letters are :",x)
    

#def digits(value):
#    for x in value:
#        if x >= 0 and x <=9:
#           print("digits are :",value)
   


def main():
    print("Enter the letter you want to enter :")
    value = str(input())

    t1 = threading.Thread(target = small, args = (value,))
    t2 = threading.Thread(target = capital, args = (value,))
#    t3 = threading.Thread(target = digits, args = (value,))
    
    t1.start()
    t2.start()
#    t3.start()

    t1.join()
    t2.join()
#    t3.join()

if __name__ == "__main__":
    main()