
def Frequency(Brr,value):
  Ans = 0
  for i in range(0,len(Brr)):
    if Brr[i] == value:
      Ans = Ans+1
  return Ans

def main():
  Arr = list()

  print("How many element you want to Enter:")
  size = int(input())

  print("Enter the element :")

  for i in range(0,size):
    no = int(input())
    Arr.append(no)
  print(Arr)

  print("Enter the element to search in list :")
  value = int(input())

  Ret = Frequency(Arr,value)
  print("frequency of element is :",Ret)

if __name__ == "__main__":
  main()