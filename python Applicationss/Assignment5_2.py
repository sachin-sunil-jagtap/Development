
class Circle:

    PI = 3.14
    def __init__(self):
        self.Radius =0.0
        self.Area = 0.0
        self.Circumference =0.0

    def Accept(self):
        print("Enter value of radius that you want to enter :")
        self.Radius = float(input())

    def CalculateArea(self):
        self.Area = self.PI * self.Radius * self.Radius


    def CalculateCircumference(self):
        self.Circumference = 2 * self.PI * self.Radius


    def Display(self):
        print("radius of circle",self.Radius)
        print("Area of circle:",self.Area)
        print("Circumference of circle :",self.Circumference)

def main():
    obj = Circle()
    obj.Accept()
    obj.CalculateArea()
    obj.CalculateCircumference()
    obj.Display()

    obj1 = Circle()
    obj1.Accept()
    obj1.CalculateArea()
    obj1.CalculateCircumference()
    obj1.Display()




if __name__ =="__main__":
    main()

