def DisplayFactors(No):
    i = 1
    print("Factors are : ")
    while(i <= int(No/2)):
        if((No % i) == 0):
            print(i)
        i = i + 1