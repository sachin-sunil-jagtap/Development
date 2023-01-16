class Demo:
    Value =0

    def __init__(self,no1,no2):
        print("Inside init method")
        self.A = no1
        self.B = no2


    def Fun(self):
        print("Inside fun method")
        print(self.A)
        print(self.B)

    def Gun(self):
        print("Inside gun method")
        print(self.A)
        print(self.B)


def main():
   obj1 = Demo(11,21)
   obj2 = Demo(51,101)

   obj1.Fun()
   obj2.Fun()

   obj1.Gun()
   obj1.Gun()


if __name__ == "__main__":
    main()

