class BookStore:

   
    NoOfBooks=0

    def __init__(self,name,author):
        
        self.Name = name
        self.Author = author
        self.NoOfBooks +=1
        
    def DisplayCount(self):
        print ("no of books %d" % self.NoOfBooks)


    def Display(self):
        print(self.Name,self.Author,self.NoOfBooks)
        
def main():
    Obj1 = BookStore("Linux system programing","Robert Love")
    Obj1.Display()
    Obj1.DisplayCount()

    Obj2 = BookStore("C programing","Dennis Ritchie")
    Obj2.Display()

    Obj2.DisplayCount()



if __name__ == "__main__":
    main()