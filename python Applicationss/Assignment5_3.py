class Arithmatic:
    def __init__(self):
        self.Value1 =0
        self.Value2 =0


    def Accept(self):
        print("Enter the first number :")
        self.Value1 = int(input())

        print("Enter the second number :")
        self.Value2 = int(input())

    def Addition(self):
        Ans = self.Value1 + self.Value2
        return Ans

    def Substraction(self):
        Ans = self.Value1 - self.Value2
        return Ans


    def Multiplication(self):
        Ans = self.Value1 * self.Value2
        return Ans

    def Division(self):
        if self.Value2 != 0:            
            Ans = self.Value1 / self.Value2
            return Ans

def main():

    Obj1 =Arithmatic()

    Obj1.Accept()

    Ret = Obj1.Addition()
    print("Addition is :",Ret)

    Ret = Obj1.Substraction()
    print("substraction  is :",Ret)

    Ret = Obj1.Multiplication()
    print("multiplication is :",Ret)

    Ret = Obj1.Division()
    print("Division is :",Ret)

if __name__ == "__main__":
    main()



    