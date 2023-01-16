

def Maximum(Brr):
  return max(Brr)

def main():
  Arr = list()

  print("how many element you want to enter :")
  size = int(input())

  print("ENter the element you want to store :")
  for i in range(0,size):
    no = int(input())
    Arr.append(no)

  Ret = Maximum(Arr)
  print("maximum number in list are :",Ret)

if __name__ == "__main__":
  main()