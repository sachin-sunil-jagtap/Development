
def CheckEvenX(No):
    return (No % 2 == 0)

Even = lambda No : No % 2 == 0

Ret = Even(12)

if(Ret == True):
    print("Its even")
else:
    print("Its odd")