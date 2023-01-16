# import Numbers
# from Numbers import DisplayFactors
# from Numbers import *
import Numbers as NUM

def main():
    print("Enter number : ")
    No = int(input())

    NUM.DisplayFactors(No)

if __name__ == "__main__":
    main()