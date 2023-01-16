
def Add(Brr):
  return sum(Brr)


def main():
  Arr = list()

  print("How many element you want to store :")
  size = int(input())

  print("Enter the element you want to store :")
  
  for i in range(0,size,1):
    no = int(input())
    Arr.append(no)
  
  Ret = Add(Arr)
  print("Addition of list are :",Ret)

if __name__ == "__main__":
  main()