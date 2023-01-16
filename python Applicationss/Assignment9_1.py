import os

def Open_File(FileName):
    if(os.path.exists(FileName)):
        print("File is present")  
                
    else:
        print("File is not existing")
        return

def main():
    print("Enter the file name ")
    Name = input()

    Open_File(Name)

if __name__ == "__main__":
    main()