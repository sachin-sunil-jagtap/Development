
def Display(No):
    if(No > 0):
        No = No - 1
        Display(No)     # Recursive call
        print(No)

Display(4)
